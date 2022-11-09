#include "Simple_window.h"
#include "Graph.h"

int main() {
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;	

	Point tl{100,100}; // to become top left corner of window
	
	Simple_window win{tl, 600, 400, "Canvas"};

	Text txt_a{Point{70,170}, "A"};
	Text txt_b{Point{200,170}, "S"};

	// txt_a.set_font(Font::times_bold);
	// txt_b.set_font(Font::times_bold);

	txt_a.set_color(Color::blue);
	txt_b.set_color(Color::red);

	txt_a.set_font_size(120);
	txt_b.set_font_size(120);

	win.attach(txt_a);
	win.attach(txt_b);

	win.wait_for_button();
}
