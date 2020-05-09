#!/usr/bin/env bash

cd part2
cp -r gamma original_gamma
cd gamma || exit 1

rm -rf debug
mkdir debug && cd debug &&cmake -D CMAKE_BUILD_TYPE=Debug .. > /dev/null && make > /dev/null || exit 1

cd /part2

./run_tests_inside_docker.sh
