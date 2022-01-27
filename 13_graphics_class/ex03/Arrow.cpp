#include "Arrow.h"

Arrow::Arrow(Point aa, Point bb)
    : a{aa}, b{bb}
{
    // do geometry here
    
    // get points for arrow head -> this is the tricky bit
    Point c{40, 20};
    Point d{20, 40};

    // draw arrow head
    this->add_point(a);
    this->add_point(c);
    this->add_point(d);
    this->black();

    add(aa);
}
Arrow::~Arrow(){}

void Arrow::draw_lines() const{
    // draw main line
    fl_line(a.x, a.y, b.x, b.y);
    head.draw_lines();
}