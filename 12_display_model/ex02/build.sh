#!/bin/bash
g++ -Wall -std=c++20 -o howdy howdy.cpp ../../GUI/*.o -I../../GUI/ -lfltk -lfltk_images 
