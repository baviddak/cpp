#include "Faces.h"


void Frowny::draw_lines() const{
    Circle::draw_lines();

    Point center = this->center();
    int rad1 = this->radius();

    // draw eyes
    fl_pie(center.x + rad1/2, center.y - rad1/2, 14, 14, 0, 360);
    fl_pie(center.x - rad1/2, center.y - rad1/2, 14, 14, 0, 360);

    // draw mouth
    fl_arc(center.x - rad1/2, center.y, 60, 40, 20, 160);
}


void Smiley::draw_lines() const{
    Circle::draw_lines();

    Point center = this->center();
    int rad1 = this->radius();

    // draw eyes
    fl_pie(center.x + rad1/2, center.y - rad1/2, 14, 14, 0, 360);
    fl_pie(center.x - rad1/2, center.y - rad1/2, 14, 14, 0, 360);

    // draw mouth
    fl_arc(center.x - rad1/2, center.y, 60, 40, 200, 340);
}