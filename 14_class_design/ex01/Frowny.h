#ifndef FROWNY_H_
#define FROWNY_H_

#include "Graph.h"

using namespace Graph_lib;

struct Frowny : Circle {
    public:
        // Frowny(Point pp, int rr);
        using Circle::Circle;
        ~Frowny();
        void draw_lines() const;
};

#endif // FROWNY_H_