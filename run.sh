#!/usr/bin/env bash
g++ -Wall -Wextra -Wpedantic -g -fsanitize=address -fsanitize=undefined $1 -lgtest -lgtest_main -pthread
