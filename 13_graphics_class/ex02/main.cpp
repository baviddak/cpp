// Draw a box with rounded corners. Define a class Box, consisting of four lines
// and four arcs.

#include "Simple_window.h"
#include "Box.h"

int main(){
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;

	Point tl{100,100}; // to become top left corner of window
	Simple_window win{tl, 700, 700, "Box Canvas"};

	// First Box
	Point point1{300,300};

	int mw1 = 200;
	int mh1 = 200;

	Box box1{point1, mw1, mh1};
	
	box1.set_color(Color::red);
	box1.set_style(Line_style::dot);

	// Second Box
	Point point2{400,400};

	int mw2 = 160;
	int mh2 = 160;

	Box box2{point2, mw2, mh2};
	
	box2.set_color(Color::dark_green);
	// box1.set_style(Line_style::dash);

	// Third Box
	Point point3{500,100};

	int mw3 = 100;
	int mh3 = 100;

	Box box3{point3, mw2, mh2};
	
	box3.set_color(Color::dark_yellow);

	// Attach and run
	win.attach(box1);
	win.attach(box2);
	win.attach(box3);
	win.wait_for_button();
	return 0;
}