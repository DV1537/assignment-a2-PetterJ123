//
// Created by Petter on 2019-01-14.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_TRINAGLE_H
#define ASSIGNMENT_A2_PETTERJ123_TRINAGLE_H

#include "Shape.hpp"
#include "Line.hpp"

class Triangle : public Shape{
public:
    Triangle();
    float calculateArea(Line* lines) override;
    float calculateCircumference(Line* lines) override;

private:
    Line l1, l2, l3;
};

#endif //ASSIGNMENT_A2_PETTERJ123_TRINAGLE_H
