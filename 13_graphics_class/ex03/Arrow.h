#ifndef ARROW_H_
#define ARROW_H_

#include <cmath>
#include "Graph.h"

using namespace Graph_lib;

constexpr int arrow_size = 25;
constexpr double PI = 3.14159265;

struct Arrow : Shape {
    public:
        Arrow(Point aa, Point bb);
        ~Arrow();

        void draw_lines() const;
        // void add_point(Point xx){head.add(xx);};
        // void black(){head.set_fill_color(Color::black);};

    private:
        Point a;
        Point b;
        // Polygon head;
};

#endif // ARROW_H_