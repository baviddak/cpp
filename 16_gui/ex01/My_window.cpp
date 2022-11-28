#include "My_window.h"

using namespace Graph_lib;

My_window::My_window(Point xy, int w, int h, const string& title)
	:Graph_lib::Window{xy, w, h, title},
	quit_button{Point{0, 0}, 70, 20, "Quit", cb_quit},
	quit_button_pushed{false},
	next_button{Point{x_max() - 70, 0}, 70, 20, "Next", cb_next},
	next_button_pushed{false}
{
	attach(next_button);
	attach(quit_button);
}

void My_window::cb_quit(Address, Address pw) {
	reference_to<My_window>(pw).quit();
}

void My_window::cb_next(Address, Address pw) {
	reference_to<My_window>(pw).next();
}

void My_window::quit() {
	quit_button_pushed = true;
}

void My_window::next() {
	next_button_pushed = true;
}

void My_window::wait_for_button() {
	while (!(quit_button_pushed || next_button_pushed)) {
		Fl::wait();
	}

	next_button_pushed = false;
	quit_button_pushed = false;
	Fl::redraw();
}