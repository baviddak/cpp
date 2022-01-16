#!/bin/bash
g++ -Wall -std=c++11 -o howdy.exe howdy.cpp ../../GUI/*.o -I../../GUI/ -lfltk -lfltk_images