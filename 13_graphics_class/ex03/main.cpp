// Define a class Arrow, which draws a line with an arrowhead.

#include "Simple_window.h"
#include "Arrow.h"

int main(){
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;

	Point tl{100,100}; // to become top left corner of window
	Simple_window win{tl, 700, 700, "Arrow Test"};

	// first arrow
	Point p1{23, 500};
	Point p2{250, 43};
	Arrow arr7{p1, p2};
	arr7.set_color(Color::white);
	win.attach(arr7);

	// second arrow
	Point p3{200, 565};
	Point p4{240, 12};
	Arrow arr9{p4, p3};
	arr9.set_color(Color::dark_red);
	win.attach(arr9);

	// third arrow
	Point p5{545, 565};
	Point p6{23, 32};
	Arrow arr12{p6, p5};
	arr12.set_color(Color::dark_green);
	win.attach(arr12);

	// fourth arrow
	Point p7{22, 11};
	Point p8{444, 666};
	Arrow arr17{p8, p7};
	arr17.set_color(Color::blue);
	win.attach(arr17);

	win.wait_for_button();
	return 0;
}