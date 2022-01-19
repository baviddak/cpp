#include "Simple_window.h"
#include "Graph.h"

int main() { 
	using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	
	Simple_window win{tl, 600, 600, "Tic Tac Board"};

    // red points
    Point p_1{0,0};
    Point p_2{0,400};
    Point p_3{200,200};
    Point p_4{400,0};
    Point p_5{400,400};

    // white points
    Point p_6{0,200};
    Point p_7{200,0};
    Point p_8{200,400};
    Point p_9{400,200};


    // red squares
    Rectangle r_1{p_1, 200, 200};
    Rectangle r_2{p_2, 200, 200};
    Rectangle r_3{p_3, 200, 200};
    Rectangle r_4{p_4, 200, 200};
    Rectangle r_5{p_5, 200, 200};

    r_1.set_fill_color(Color::red);
    r_2.set_fill_color(Color::red);
    r_3.set_fill_color(Color::red);
    r_4.set_fill_color(Color::red);
    r_5.set_fill_color(Color::red);

    // white squares
    Rectangle r_6{p_6, 200, 200};
    Rectangle r_7{p_7, 200, 200};
    Rectangle r_8{p_8, 200, 200};
    Rectangle r_9{p_9, 200, 200};

    r_6.set_fill_color(Color::white);
    r_7.set_fill_color(Color::white);
    r_8.set_fill_color(Color::white);
    r_9.set_fill_color(Color::white);

    // attach squares
    win.attach(r_1);
    win.attach(r_2);
    win.attach(r_3);
    win.attach(r_4);
    win.attach(r_5);
    win.attach(r_6);
    win.attach(r_7);
    win.attach(r_8);
    win.attach(r_9);

	win.wait_for_button();
}
