#include <iostream>
#include "Simple_window.h"
#include "Arc.h"

int main(){
    //do something
    using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	Simple_window win{tl, 700, 700, "Canvas"};

    // First Arc
    Point point1{300,300};

    int mw1 = 80;
    int mh1 = 95;

    double a1_1 = 4.0;
    double a2_1 = 187.2;

    Arc arc1{point1, mw1, mh1, a1_1, a2_1};

    // Second Arc
    Point point2{400,500};

    int mw2 = 90;
    int mh2 = 105;

    double a1_2 = 70.0;
    double a2_2 = 287.2;

    Arc arc2{point2, mw2, mh2, a1_2, a2_2};

    // Attach and run
    win.attach(arc1);
    win.attach(arc2);

	win.wait_for_button();
    return 0;
}