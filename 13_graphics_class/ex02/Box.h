#ifndef BOX_H_
#define BOX_H_

#include "Graph.h"

using namespace Graph_lib;

constexpr int circ_size = 50;

struct Box : Shape {
	public:
		Box(Point cc, int ww, int hh);
		~Box();

		void draw_lines() const;

	private:
		Point c;
		int w;
		int h;
};

#endif // BOX_H_