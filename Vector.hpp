//
// Created by Petter on 2019-01-14.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_VECTOR_H
#define ASSIGNMENT_A2_PETTERJ123_VECTOR_H
#include <iostream>

#include "Shape.hpp"

class Vector : public Shape{
public:
    Vector();
    void setX(float &x);
    void setY(float &y);
    float getX() const;
    float getY() const;

    float calculateArea() override;
    float calculateCircumference() override;
    float distance() override;
    float position() override;
    bool isConvex() override;
    void setType(std::string &type) override;

private:
    float x;
    float y;
    std::string type;
};


#endif //ASSIGNMENT_A2_PETTERJ123_VECTOR_H