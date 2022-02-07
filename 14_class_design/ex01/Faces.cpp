#include "Faces.h"


void Frowny::draw_lines() const{
    Circle::draw_lines();

    Point center = this->center();
    int rad1 = this->radius();

    // draw eyes
    fl_pie(center.x + rad1/2, center.y - rad1/2, 14, 14, 0, 360);
    fl_pie(center.x - rad1/2, center.y - rad1/2, 14, 14, 0, 360);

    // draw mouth
    fl_arc(center.x - rad1/2, center.y, 3*rad1/4, rad1/2, 20, 160);
}


void Smiley::draw_lines() const{
    Circle::draw_lines();

    Point center = this->center();
    int rad1 = this->radius();

    // draw eyes
    fl_pie(center.x + rad1/2, center.y - rad1/2, 14, 14, 0, 360);
    fl_pie(center.x - rad1/2, center.y - rad1/2, 14, 14, 0, 360);

    // draw mouth
    fl_arc(center.x - rad1/2, center.y, 3*rad1/4, rad1/2, 200, 340);
}


void Frowny_hat::draw_lines() const{
    Frowny::draw_lines();

    Point center = this->center();
    int rad1 = this->radius();

    // draw hat 
    fl_xyline(center.x - rad1, center.y - rad1, center.x + rad1);
    fl_rectf(center.x - rad1/2, center.y - rad1 - 20, rad1 - 20, 20);

}


void Smiley_hat::draw_lines() const{
    Smiley::draw_lines();

    Point center = this->center();
    int rad1 = this->radius();

    // draw hat 
    fl_xyline(center.x - rad1, center.y - rad1, center.x + rad1);
    fl_rectf(center.x - rad1/2, center.y - rad1 - 20, rad1 - 20, 20);
}