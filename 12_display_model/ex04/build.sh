#!/bin/bash
g++ -Wall -std=c++11 -o tic_tac.exe tic_tac.cpp ../../GUI/*.o -I../../GUI/ -lfltk -lfltk_images