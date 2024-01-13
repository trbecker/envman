# Using the standalone server and client for testing

## Running the containers

Examples using podman. For docker, just replace podman with docker.

~~~
# podman run -d --rm --name api-server [--network <net>] [-p 8081:8081] \
        docker.io/trbecker/envman-standalone:latest

# podman inspect api-server -f '{{ .NetworkSettings.IPAddress }}'
10.88.0.10

# podman run -it --rm [--network <net>] docker.io/trbecker/envman-client:latest bash
~~~

## Connecting an UE
~~~
python3 e2sim_client/e2sim_client.py connect http://<api-server-ip>:8081/v1/ <iMSI>
~~~

## Disconnecting an UE
~~~
python3 e2sim_client/e2sim_client.py disconnect http://<api-server>:8081/v1/ <iMSI>
~~~
