#include "Simple_window.h"
#include "Arrow.h"

int main(){
    //do something
    using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	Simple_window win{tl, 700, 700, "Arrow Test"};

    // // First Arrow
    // Point tail1{100, 100};
    // Point head1{190, 10};

    // Arrow arr1{head1, tail1};


    // // Second Arrow
    // Point tail2{100, 100};
    // Point head2{10, 10};

    // Arrow arr2{head2, tail2};

    // // Third Arrow
    // Point tail3{100, 100};
    // Point head3{10, 190};

    // Arrow arr3{head3, tail3};

    // // Fourth Arrow
    // Point tail4{100, 100};
    // Point head4{190, 190};

    // Arrow arr4{head4, tail4};

    // win.attach(arr1);
    // win.attach(arr2);
    // win.attach(arr3);
    // win.attach(arr4);

    // Random arrow
    Point p1{23, 500};
    Point p2{250, 43};
    Arrow arr7{p1, p2};
    win.attach(arr7);

    // Random arrow
    // Point p3{230, 50};
    // Point p4{25, 430};
    // Arrow arr9{p3, p4};
    // win.attach(arr9);

    // Random arrow
    // Point p3{521, 491};
    // Point p4{111, 54};
    // Arrow arr9{p4, p3};
    // win.attach(arr9);

    // Random arrow
    Point p3{17, 565};
    Point p4{500, 54};
    Arrow arr9{p4, p3};
    win.attach(arr9);


	win.wait_for_button();
    return 0;
}