FROM ubuntu:20.04
RUN apt update \
    && DEBIAN_FRONTEND=noninteractive apt install -y \
    build-essential \
    git \
    cmake \
    meson \
    && apt-get clean

WORKDIR /playpen

RUN git clone --depth 1 https://github.com/pistacheio/pistache.git /pistache && cd /pistache \
    && meson setup build --prefix=/usr/local --libdir=lib -Ddebug=true && meson install -C build \
    && ldconfig && cd / && rm -fr /pistache

RUN git clone --depth 1 https://github.com/nlohmann/json.git /json && mkdir -p /json/build \
    && cd /json/build && cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local -DJSON_BuildTests=OFF \
    && make && make install && ldconfig && cd / && rm -fr /json

COPY . /playpen/

RUN mkdir -p build && cd build && cmake .. && make -j4 && make install && ldconfig
RUN mkdir standalone/build && cd standalone/build && cmake .. && make && make install

ENTRYPOINT /usr/local/bin/api-server
