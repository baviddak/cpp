// Define a Striped_rectangle where instead of fill, the rectangle is "filled" 
// by drawing one-pixel-wide horizontal lines across the inside of the rectangle 
// (say, draw every second line like that).

#include "Simple_window.h"
#include "Striped_rectangle.h"

int main(){
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;

	Point tl{100,100}; // to become top left corner of window
	Simple_window win{tl, 600, 600, "Striped rectangle Test"};

	// Draw a striped rectangle
	Point p1{50, 50};
    Point p2{150, 450};
	Striped_rectangle sr1{p1, p2};
	sr1.set_color(Color::dark_blue);
	win.attach(sr1);

    // Draw a second striped rectangle
	Point p3{250, 70};
    Point p4{350, 350};
	Striped_rectangle sr2{p3, p4};
	sr2.set_color(Color::red);
	win.attach(sr2);
	
	win.wait_for_button();
	return 0;
}