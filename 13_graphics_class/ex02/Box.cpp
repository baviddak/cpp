#include "Box.h"

Box::Box(Point cc, int ww, int hh)
	: c{cc}, h{hh}, w{ww}
{
	// do something
	add(cc);
}
Box::~Box(){}

void Box::draw_lines() const{
	// should add some sanity checks
	
	int rad = circ_size/2;

	// draw the lines
	fl_line(c.x - (w/2) + rad, c.y - (h/2), c.x + (w/2) - rad, c.y - (h/2));
	fl_line(c.x - (w/2), c.y - (h/2) + rad, c.x - (w/2), c.y + (h/2) - rad);
	fl_line(c.x + (w/2), c.y - (h/2) + rad, c.x + (w/2), c.y + (h/2) - rad);
	fl_line(c.x - (w/2) + rad, c.y + (h/2), c.x + (w/2) - rad, c.y + (h/2));

	// draw the arcs
	fl_arc(c.x - w/2, c.y - h/2, circ_size, circ_size, 90.0, 180.0);
	fl_arc(c.x + w/2 - circ_size, c.y - h/2, circ_size, circ_size, 0, 90.0);
	fl_arc(c.x + w/2 - circ_size, c.y + h/2 - circ_size, circ_size, circ_size, 270.0, 360.0);
	fl_arc(c.x - w/2, c.y + h/2 - circ_size, circ_size, circ_size, 180.0, 270.0);

}