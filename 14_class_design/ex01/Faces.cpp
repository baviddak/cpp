#include "Frowny.h"

// Frowny::Frowny(Point pp, int rr)
//     : p{pp}
// {
//     // empty
// }

Frowny::~Frowny(){
    // empty
}

void Frowny::draw_lines() const{
    Circle::draw_lines();

    Point center = this->center();
    int rad1 = this->radius();

    fl_circle(center.x + rad1/2, center.y - rad1/2, 7);
    fl_circle(center.x - rad1/2, center.y - rad1/2, 7);

    fl_arc(center.x - rad1/2, center.y, 60, 40, 200, 340);


}