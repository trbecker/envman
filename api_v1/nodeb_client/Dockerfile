from ubuntu:20.04

run apt-get update \
	&& DEBIAN_FRONTEND=noninteractive apt-get install -y python3 pip \
	&& apt-get clean


workdir /playpen
copy . /playpen

run cd python && pip install -r requirements.txt && pip install .
CMD sleep 100000000
