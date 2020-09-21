#!/bin/bash
g++ -Wall -o howdy howdy.cpp -I../../Graphics_code/include/ -lfltk -lfltk_images ../../Graphics_code/src/*.o
