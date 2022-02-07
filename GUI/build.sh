#!/bin/bash
g++ -std=c++14 -Wall -c -o Window.o Window.cpp -I.
g++ -std=c++11 -Wall -c -o Simple_window.o Simple_window.cpp -I.
g++ -std=c++11 -Wall -c -o GUI.o GUI.cpp -I.
g++ -std=c++11 -Wall -c -o Graph.o Graph.cpp -I.