//
// Created by patpat on 2018-11-19.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_1_SHAPE_H
#define ASSIGNMENT_A2_PETTERJ123_1_SHAPE_H

#include <string>
#include <fstream>
#include <iostream>
#include "Vector.hpp"

class Shape {
public:
    ~Shape();
    virtual float getArea() = 0;
    float getCircumference();
    std::string getType();
    virtual float getCenterPos() = 0;

private:
    float circumference;
    std::string typeShape;
    float centerPosition;
    float area;
};


#endif //ASSIGNMENT_A2_PETTERJ123_1_SHAPE_H
