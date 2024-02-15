#!/bin/bash

# Requires a local registry attending port 5001.
# docker run -d -p 5001:5000 --name registry registry:2

kubectl delete pod -n ricxapp e2simtest &
docker build -t localhost:5001/e2sim_test .
docker push localhost:5001/e2sim_test
kubectl run e2simtest --image=localhost:5001/e2sim_test -n ricxapp --restart=Never
echo "To enter the pod, execute kubectl exec -it -n ricxapp e2sim bash"
e2sim_ip=$(kubectl get pods -n ricxapp -o wide | awk '$1 ~ /e2sim/ { print $6 }')

