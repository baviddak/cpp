#include "Arc.h"

Arc::Arc(Point pp, int ww, int hh, double a1, double a2)
	: p{pp}, w{ww}, h{hh}, angle1{a1}, angle2{a2}
{
	// add checks so that the angles and point make sense

	// not sure what add does
	add(p);
}

Arc::~Arc(){
}

void Arc::draw_lines() const{
	fl_arc(p.x, p.y, w, h, angle1, angle2);
}