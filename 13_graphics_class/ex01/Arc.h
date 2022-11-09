#ifndef ARC_H_
#define ARC_H_

// #include "Simple_window.h"
// #include "fltk.h"
#include "Graph.h"

using namespace Graph_lib;

struct Arc : Shape {
	public:
		// Arc();
		Arc(Point pp, int ww, int hh, double a1, double a2);
		~Arc();

		void draw_lines() const;

	private:
		Point p;
		int w;
		int h;
		double angle1;
		double angle2;
};

#endif // ARC_H_