#!/bin/bash
rm index
clang -Wall -std=c++14 -o index price_weight.cpp -lstdc++ -lm
