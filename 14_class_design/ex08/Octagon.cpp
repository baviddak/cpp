#include "Octagon.h"

Octagon::Octagon(Point cc, int ss){
    int angle_ss = (cos_45)*static_cast<float>(ss);

    add(Point{cc.x - ss, cc.y});
    add(Point{cc.x - angle_ss, cc.y - angle_ss});
    add(Point{cc.x, cc.y - ss});
    add(Point{cc.x + angle_ss, cc.y - angle_ss});
    add(Point{cc.x + ss, cc.y});
    add(Point{cc.x + angle_ss, cc.y + angle_ss});
    add(Point{cc.x, cc.y + ss});
    add(Point{cc.x - angle_ss, cc.y + angle_ss});

}

Octagon::~Octagon(){
    // empty
}

void Octagon::draw_lines() const{
    for(int i=0; i < number_of_points() - 1; i++){
        fl_line(point(i).x, point(i).y, point(i+1).x, point(i+1).y);
    }
    fl_line(point(7).x, point(7).y, point(0).x, point(0).y);
}