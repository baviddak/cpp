#include "Striped_rectangle.h"

void Striped_rectangle::draw_lines() const{
	// draw lines from rectangle
	Rectangle::draw_lines();

	// generate number of lines to draw
	int this_height = height();
	int num_lines = this_height / 3;

	// points of interest
	int x_1 = point(0).x;
	int y_1 = point(0).y;
	int x_2 = x_1 + width();
	int y_2 = y_1 + height();
	
	// loop through and draw horizontal lines
	for (int i=1; i < num_lines ; i++) {
		fl_line(x_1, y_1 + (i*3), x_2 - 2, y_1 + (i*3));
	}
}