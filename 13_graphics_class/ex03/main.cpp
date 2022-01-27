#include "Simple_window.h"
#include "Arrow.h"

int main(){
    //do something
    using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	Simple_window win{tl, 700, 700, "Arrow Test"};

    // First Arrow
    Point p1{20, 20};
    Point p2{206, 206};

    Arrow arr1{p1, p2};

    win.attach(arr1);
	win.wait_for_button();
    return 0;
}