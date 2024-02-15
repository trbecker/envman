import openapi_client as e2sim_client
import random

def _get_endpoint_ip():
    import socket
    hostname = socket.gethostname()
    return socket.gethostbyname(hostname)

def create_random_anr(bbu_name, scaling_factors=[1, 1, 1, 1, 1]):
    bbu = e2sim_client.NodebDescriptor(nodeb_id=bbu_name)
    anr_values = zip([ random.random() for _ in range(5) ], scaling_factors)
    anr_values = [x * y for (x, y) in anr_values ]
    anr_payload = e2sim_client.AnrPayload(nodeb=bbu,
                                          rsrp=anr_values[0],
                                          rsrq=anr_values[1],
                                          sinr=anr_values[2],
                                          cqi=anr_values[3],
                                          bler=anr_values[4]
    )
    
    return anr_payload

def create_random_anr_request(bbus, scaling_factor=[1, 1, 1, 1, 1]):
    anr_list = [create_random_anr(bbu, scaling_factor) for bbu in bbus]
    return e2sim_client.UEIMSIAnrPutRequest(nodeb_list=anr_list)

def create_random_data_plane_flow():
    return e2sim_client.DataPlaneFlow(
            average_throughput=random.randint(0, 1000000),
            latency=random.uniform(1, 20)) # better if it  was a normal

def create_random_ue(imsi, seen_bbu_names):
    anr = [ create_random_anr(bbu) for bbu in seen_bbu_names ]
    dpf = create_random_data_plane_flow()
    dpf.model_validate(dpf)
    ip = _get_endpoint_ip()
    return e2sim_client.UeDescriptor(
            data_plane_flow = dpf,
            anr_payload = anr,
            endpoint = f"http://{ip}:8081/{imsi}")

def ue_connect(server_url, imsi, ue, cell):
    requestBody = e2sim_client.UEIMSIAdmissionPutRequest(ue=ue, nodeb=cell)
    configuration = e2sim_client.Configuration(
            host = server_url)
    with e2sim_client.ApiClient(configuration) as api_client:
        api_instance = e2sim_client.ManagementApi(api_client)
        try:
            api_instance.u_eimsi_admission_put(imsi, requestBody)
        except Exception as e:
            print("ManagementApi.u_eimsi_admission_put: %s\n" % e)

def ue_disconnect(server_url, imsi):
    configuration = e2sim_client.Configuration(
            host = server_url)
    with e2sim_client.ApiClient(configuration) as api_client:
        api_instance = e2sim_client.ManagementApi(api_client)
        try:
            api_instance.u_eimsi_admission_delete(imsi)
        except Exception as e:
            print("ManagementApi.u_eimsi_admission_delete: %s\n" % e)

def ue_anr_update(server_url, imsi, anr_info):
    configuration = e2sim_client.Configuration(
            host = server_url)
    with e2sim_client.ApiClient(configuration) as api_client:
        api_instance = e2sim_client.ManagementApi(api_client)
        try:
            api_instance.u_eimsi_anr_put(imsi, anr_info)
        except Exception as e:
            print("ManagementApi.u_eimsi_admission_delete: %s\n" % e)

def ue_flow_update(server_url, imsi, flow):
    configuration = e2sim_client.Configuration(
            host = server_url)
    with e2sim_client.ApiClient(configuration) as api_client:
        api_instance = e2sim_client.ManagementApi(api_client)
        try:
            api_instance.u_eimsi_flow_put(imsi, flow)
        except Exception as e:
            print("ManagementApi.u_eimsi_admission_delete: %s\n" % e)

if __name__ == '__main__':
    import sys
    subcommand = sys.argv[1]

    if subcommand == 'connect':
        ue = create_random_ue(sys.argv[3], [f'gnb{i}' for i in range(6)])
        ue_connect(sys.argv[2], sys.argv[3], ue)
    elif subcommand == 'disconnect':
        ue_disconnect(sys.argv[2], sys.argv[3])
    elif subcommand == 'update-anr':
        anr_info = create_random_anr_request([f'gnb{i}' for i in range(6)])
        ue_anr_update(sys.argv[2], sys.argv[3], anr_info)
    elif subcommand == 'update-flow':
        flow_info = e2sim_client.UEIMSIFlowPutRequest(flow=create_random_data_plane_flow())
        ue_flow_update(sys.argv[2], sys.argv[3], flow_info)

    else:
        print(f"Unknown action {subcommand}")

