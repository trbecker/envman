FROM ubuntu:20.04

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    build-essential \
    cmake \
    libcpprest-dev \
    libboost-program-options-dev \
    uriparser-dev
    && apt-get clean

RUN mkdir /playpen
WORKDIR /playpen

COPY . /playpen
RUN mkdir build && cd build && cmake .. && make -j4 && make install

RUN mkdir comm/build && cd comm/build && cmake .. && make -j4