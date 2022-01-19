#!/bin/bash
g++ -Wall -std=c++11 -o initials.exe initials.cpp ../../GUI/*.o -I../../GUI/ -lfltk -lfltk_images