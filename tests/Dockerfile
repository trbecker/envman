from ubuntu:20.04

WORKDIR /playpen

RUN apt-get update \
	&& DEBIAN_FRONTEND=noninteractive apt-get install -y \
	python3 iproute2 \
	&& apt-get clean

COPY . /playpen
