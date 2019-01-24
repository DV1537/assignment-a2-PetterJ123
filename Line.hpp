//
// Created by Petter on 2019-01-15.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_LINE_H
#define ASSIGNMENT_A2_PETTERJ123_LINE_H

#include <ostream>
#include "Shape.hpp"

class Line : public Shape{
public:
    Line();
    void setX1(float x1);
    void setY1(float y1);
    void setX2(float x2);
    void setY2(float y2);

    float getX1() const;
    float getY1() const;
    float getX2() const;
    float getY2() const;

    float getLength() const;

    void setLength(float leng);

    float calculateArea() override;
    float calculateCircumference() override;
    float distance() override;
    float position() override;
    bool isConvex() override;
    void setType(std::string &type) override;

private:
    float x1, x2, y1, y2;
    float length;
};

#endif //ASSIGNMENT_A2_PETTERJ123_LINE_H
