#ifndef MY_WINDOW_H_
#define MY_WINDOW_H_

#include "Graph.h"
#include "Simple_window.h"
#include "Window.h"

using namespace Graph_lib;

struct My_window : Graph_lib::Window {
    My_window(Point xy, int w, int h, const string& title);
    void wait_for_button();

    private:
        Button quit_button;
        Button next_button;
        bool quit_button_pushed;
        bool next_button_pushed;
        static void cb_quit(Address, Address);
        static void cb_next(Address, Address);
        void quit();
        void next();
};

#endif // MY_WINDOW_H_