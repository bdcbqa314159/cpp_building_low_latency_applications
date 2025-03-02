FROM ubuntu:oracular

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y tzdata
RUN apt-get install -y vim build-essential git cmake net-tools gdb clang
RUN apt-get install -y ninja-build
RUN apt-get install -y wget curl

WORKDIR /work