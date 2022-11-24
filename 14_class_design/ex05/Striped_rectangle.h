#ifndef STRIPED_H_
#define STRIPED_H_

#include "Graph.h"

using namespace Graph_lib;

struct Striped_rectangle : Rectangle {
	using Rectangle::Rectangle;
	void draw_lines() const;
};

#endif // STRIPED_H_