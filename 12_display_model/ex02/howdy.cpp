// Draw a 100-by-30 Rectangle and place the text "Howdy!" inside it.

#include "Simple_window.h"
#include "Graph.h"

int main() {
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;

	Point tl{100,100}; // to become top left corner of window
	
	Simple_window win{tl, 600, 400, "Canvas"};

	// create a rectangle
	Rectangle retg{Point{50,50}, 100, 40};	

	// create some text
	Text txt{Point{70,70}, "Howdy!"};

	// attach text and rectangle
	win.attach(retg);
	win.attach(txt);

	win.wait_for_button();
}
