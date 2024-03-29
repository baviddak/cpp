// Define a class Octagon to be a regular octagon. Write a test that exercises 
// all of its functions (as defined by you or inherited from Shape).

#include "Simple_window.h"
#include "Octagon.h"

int main(){
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;

	Point tl{100,100}; // to become top left corner of window
	Simple_window win{tl, 600, 600, "Octagon Test"};

	// first octagon
	Point p1{350, 350};
	int size1{77};
	Octagon octa1{p1, size1};
	octa1.set_color(Color::dark_blue);
	// octa1.set_fill_color(Color::dark_green);
	octa1.fill_color();
	win.attach(octa1);

	// second octagon
	Point p2{120, 120};
	int size2{60};
	Octagon octa2{p2, size2};
	octa2.set_fill_color(Color::dark_green);
	octa2.fill_color();
	win.attach(octa2);

	// third octagon
	Point p3{120, 350};
	int size3{60};
	Octagon octa3{p3, size3};
	octa3.set_color(Color::dark_cyan);
	win.attach(octa3);

	// fourth octagon
	Point p4{350, 150};
	int size4{60};
	Octagon octa4{p4, size4};
	octa4.set_color(Color::red);
	win.attach(octa4);
	
	win.wait_for_button();
	return 0;
}