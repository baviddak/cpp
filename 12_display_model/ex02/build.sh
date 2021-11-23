#!/bin/bash
g++ -Wall -o howdy howdy.cpp ../../GUI/*.o -I../../GUI/ -lfltk -lfltk_images 
