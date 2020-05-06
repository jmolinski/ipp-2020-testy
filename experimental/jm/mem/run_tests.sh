#!/usr/bin/env bash

imgname="students.ipp"
imgversion="1"

cd docker-test
docker build -t "${imgname}:${imgversion}" .

docker run -it --memory="128m" --memory-swap="128m" ${imgname}:${imgversion}
