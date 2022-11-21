// Define functions n(), s(), e(), w(), center(), ne(), se(), sw(), and nw(). 
// Each takes a Rectangle argument and returns a Point.

// #include <iostream>
#include "Simple_window.h"

using namespace Graph_lib;

Point& n(const Rectangle& rect){
	// create a new point
	Point *retp = new Point{rect.point(0).x + (rect.width()/2), rect.point(0).y};
	return *retp;
}

Point& s(const Rectangle& rect){
	// create a new point
	Point *retp = new Point{rect.point(0).x + (rect.width()/2), rect.point(0).y + rect.height()};
	return *retp;
}

Point& e(const Rectangle& rect){
	// create a new point
	Point *retp = new Point{rect.point(0).x + rect.width(), rect.point(0).y + (rect.height()/2)};
	return *retp;
}

Point& w(const Rectangle& rect){
	// create a new point
	Point *retp = new Point{rect.point(0).x + (rect.width()/2), rect.point(0).y};
	return *retp;
}

Point& nw(const Rectangle& rect){
	// create a new point
	Point *retp = new Point{rect.point(0).x, rect.point(0).y};
	return *retp;
}


int main(){
	// test functions
	Point tl{100,100};		// to become top left corner of window
	Simple_window win{tl, 700, 700, "Arrow Test"};

	// first point
	Point p1{23, 29};
	Point p2{250, 88};

	Rectangle rect1{p1, p2};

	std::cout << "The number of points in the rectangle is: " << rect1.number_of_points() << "\n";
	std::cout << "The number of points in the rectangle is: " << rect1.number_of_points() << "\n";

	for(int i=0; i<rect1.number_of_points();i++){
		std::cout << "Point " << i << "-x = " << rect1.point(i).x << "\n";
		std::cout << "Point " << i << "-y = " << rect1.point(i).y << "\n";
	}

	// test Point for N
	Point test = n(rect1);
	std::cout << "Test point has value N: [" << test.x << ", " << test.y << "]\n";

	// test Point for NW
	test = nw(rect1);
	std::cout << "Test point has value NW: [" << test.x << ", " << test.y << "]\n";

	// test Point for S
	test = s(rect1);
	std::cout << "Test point has value S: [" << test.x << ", " << test.y << "]\n";

	// test Point for E
	test = e(rect1);
	std::cout << "Test point has value E: [" << test.x << ", " << test.y << "]\n";

	// test Point for W
	test = w(rect1);
	std::cout << "Test point has value W: [" << test.x << ", " << test.y << "]\n";

	return 0;
}