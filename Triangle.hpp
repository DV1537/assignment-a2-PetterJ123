//
// Created by Petter on 2019-01-14.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_TRINAGLE_H
#define ASSIGNMENT_A2_PETTERJ123_TRINAGLE_H

#include <ostream>
#include <iostream>
#include <cmath>
#include "Shape.hpp"
#include "Line.hpp"

class Triangle : public Shape{
public:
    Triangle();
    Triangle(Line &l1,
                Line &l2,
                Line &l3);

    float calculateArea() override;
    float calculateCircumference() override;
    float distance() override;
    float position() override;
    bool isConvex() override;
    void setType(std::string &type) override;

    void setL1(Line &l1);
    void setL2(Line &l2);
    void setL3(Line &l3);

    Line getL1();
    Line getL2();
    Line getL3();

private:
    Line l1, l2, l3;
};

#endif //ASSIGNMENT_A2_PETTERJ123_TRINAGLE_H