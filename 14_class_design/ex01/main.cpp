#include "Simple_window.h"
#include "Faces.h"

int main(){
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;

	Point tl{100,100}; // top left corner of window
	Simple_window win{tl, 600, 600, "Faces Test"};

	// first frown
	Point p1{350, 350};
	int rad1{77};
	Frowny frowny1{p1, rad1};
	frowny1.set_color(Color::dark_blue);
	win.attach(frowny1);

	// first smiley
	Point p2{120, 120};
	int rad2{98};
	Smiley smiley1{p2, rad2};
	smiley1.set_color(Color::dark_magenta);
	win.attach(smiley1);

	// first frown with hat
	Point p3{350, 145};
	int rad3{120};
	Frowny_hat frownyhat1{p3, rad3};
	frownyhat1.set_color(Color::dark_cyan);
	win.attach(frownyhat1);

	// first smiley with hat
	Point p4{120, 350};
	int rad4{68};
	Smiley_hat smileyhat1{p4, rad4};
	smileyhat1.set_color(Color::red);
	win.attach(smileyhat1);

	win.wait_for_button();
	return 0;
}