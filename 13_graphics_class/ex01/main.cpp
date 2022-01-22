#include <iostream>
#include "Simple_window.h"
#include "Arc.h"

int main(){
    //do something
    using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	
	Simple_window win{tl, 700, 700, "Canvas"};

	// Text txt_a{Point{70,170}, "A"};
    // win.attach(txt_a);

    Point my_point{300,300};

    int mw = 80;
    int mh = 95;

    double a1 = 4.0;
    double a2 = 187.2;

    Arc my_arc{my_point, mw, mh, a1, a2};

    win.attach(my_arc);


	win.wait_for_button();
    return 0;
}