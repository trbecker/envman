ARG CONTAINER_PULL_REGISTRY=nexus3.o-ran-sc.org:10002
FROM ${CONTAINER_PULL_REGISTRY}/o-ran-sc/bldr-ubuntu20-c-go:1.0.0 as e2sim-base

WORKDIR /playpen

RUN apt-get update \
	&& DEBIAN_FRONTEND=noninteractive apt-get install -y \
	build-essential \
	git \
	cmake \
	libsctp-dev \
	autoconf \
	automake \
	vim \
	iputils-ping \
	iproute2 \
	tcpdump \
	libcurl4-openssl-dev \
	libcpprest-dev \
	meson \
	libboost-all-dev \
	python3-pip \
	&& apt-get clean

RUN git clone --depth 1 https://github.com/pistacheio/pistache.git /pistache && cd /pistache \
	&& meson setup build --prefix=/usr/local --libdir=lib -Ddebug=true && meson install -C build \
	&& ldconfig && cd / && rm -fr /pistache

RUN git clone --depth 1 https://github.com/nlohmann/json.git /json && mkdir -p /json/build \
	&& cd /json/build && cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local -DJSON_BuildTests=OFF \
	&& make && make install && ldconfig && cd / && rm -fr /json

COPY . /playpen/

RUN mkdir api_v1/server/build -p && cd api_v1/server/build && cmake .. && make && make install
