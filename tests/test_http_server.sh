#!/bin/bash

echo "IP address: " $(ip route get 1 | awk '{ print $7 }')
python3 test_http_server.py 9000
