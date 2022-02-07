#include "Simple_window.h"
#include "Frowny.h"

int main(){
    //do something
    using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	Simple_window win{tl, 600, 600, "Frown Test"};

    // first frown
    Point p1{350, 350};
    int rad1{67};
    Frowny frown1{p1, rad1};
    // frown1.set_color(Color::white);
    win.attach(frown1);


	win.wait_for_button();
    return 0;
}