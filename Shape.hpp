//
// Created by Petter on 2019-01-14.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_SHAPE_H
#define ASSIGNMENT_A2_PETTERJ123_SHAPE_H

#include "Line.hpp"
#include <string>

class Shape{
public:
    virtual float calculateArea() = 0;
    virtual float calculateCircumference() = 0;
    virtual float distance() = 0;
    virtual float position() = 0;
    virtual bool isConvex() = 0;
    virtual void setType(std::string& type) = 0;

private:
    float area = 0.0f;
    float circumference = 0.0f;
    std::string type = "";
};


#endif //ASSIGNMENT_A2_PETTERJ123_SHAPE_H
