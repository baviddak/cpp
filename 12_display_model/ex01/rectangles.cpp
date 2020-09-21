#include "Simple_window.h"
#include "Graph.h"

int main() { 
	using namespace Graph_lib;

	Point tl {100,100};

	Simple_window win {tl, 600, 400, "Canvas"};

	// Create a rectangle with the Polygon class 
	Polygon poly;

	poly.add(Point{300, 200});
	poly.add(Point{300, 100});
	poly.add(Point{400, 100});
	poly.add(Point{400, 200});

	poly.set_color(Color::red);

	win.attach(poly);

	// Create a rectangle with the Rectangle class 
	Rectangle retg{Point{50,50}, 100,100};

	retg.set_color(Color::blue);

	win.attach(retg);

	// done creating chapes
	win.wait_for_button();

}



