#!/bin/bash
rm index
clang -Wall -std=c++14 -o index.exe price_weight.cpp -lstdc++ -lm
