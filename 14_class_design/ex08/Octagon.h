#ifndef OCTAGON_H_
#define OCTAGON_H_

#include "Graph.h"

using namespace Graph_lib;

constexpr double cos_45 = 0.70710678118;

struct Octagon : Closed_polyline {
    public: 
        Octagon(Point cc, int ss);
        ~Octagon();
        void draw_lines() const;
};

#endif // OCTAGON_H_