//
// Created by Petter on 2019-01-15.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_LINE_H
#define ASSIGNMENT_A2_PETTERJ123_LINE_H

#include <ostream>
#include <cmath>
#include "Vector.hpp"

class Line{
public:
    Line();
    Line(float x1,
            float y1,
            float x2,
            float y2);
    void setX1(float x1);
    void setY1(float y1);
    void setX2(float x2);
    void setY2(float y2);

    float getX1() const;
    float getY1() const;
    float getX2() const;
    float getY2() const;

private:
    float x1, x2, y1, y2;
};

#endif //ASSIGNMENT_A2_PETTERJ123_LINE_H
