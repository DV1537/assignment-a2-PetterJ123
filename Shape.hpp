//
// Created by Petter on 2019-01-14.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_SHAPE_H
#define ASSIGNMENT_A2_PETTERJ123_SHAPE_H

#include "Vector.hpp"
#include "Line.hpp"

#include <string>

class Shape{
public:
    virtual float calculateArea(Line* lines) = 0;
    virtual float calculateCircumference(Line* lines) = 0;
    virtual float distance();
    virtual float position();
    virtual bool isConvex();
    void setType(std::string& type);
    std::string getType();

private:
    float area;
    float circumference;
    std::string type;
};


#endif //ASSIGNMENT_A2_PETTERJ123_SHAPE_H
