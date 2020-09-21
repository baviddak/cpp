#include "Simple_window.h"
#include "Graph.h"

int main() { 
	using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	
	Simple_window win{tl, 600, 400, "Canvas"};

	Rectangle retg{Point{50,50}, 100, 40};	

	Text txt{Point{70,70}, "Howdy!"};

	win.attach(retg);
	win.attach(txt);

	win.wait_for_button();
}
