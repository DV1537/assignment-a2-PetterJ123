//
// Created by patpat on 2018-11-21.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_1_TRIANGLE_H
#define ASSIGNMENT_A2_PETTERJ123_1_TRIANGLE_H


#include "Shape.hpp"

class Triangle : public Shape{;
public:
    Triangle();
    ~Triangle();
    Triangle(double x1Pos,
                double y1Pos,
                double x2Pos,
                double y2Pos,
                double x3Pos,
                double y3Pos);

private:
    double x1Pos,
            y1Pos,
            x2Pos,
            y2Pos,
            x3Pos,
            y3Pos;
};


#endif //ASSIGNMENT_A2_PETTERJ123_1_TRIANGLE_H
