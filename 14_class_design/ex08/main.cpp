#include "Simple_window.h"
#include "Octagon.h"

int main(){
    //do something
    using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	Simple_window win{tl, 600, 600, "Octagon Test"};

    // first octagon
    Point p1{350, 350};
    int size{77};
    Octagon octa1{p1, size};
    octa1.set_color(Color::dark_blue);
    // octa1.set_fill_color(Color::dark_green);
    octa1.fill_color();
    win.attach(octa1);


    // second octagon
    Point p2{120, 120};
    int size2{60};
    Octagon octa2{p2, size2};
    // octa2.set_color(Color::dark_cyan);
    octa2.set_fill_color(Color::dark_green);
    octa2.fill_color();
    win.attach(octa2);

    // second octagon
    Point p3{120, 350};
    int size3{60};
    Octagon octa3{p3, size3};
    octa3.set_color(Color::dark_cyan);
    // octa3.set_fill_color(Color::dark_green);
    // octa3.fill_color();
    win.attach(octa3);

	win.wait_for_button();
    return 0;
}