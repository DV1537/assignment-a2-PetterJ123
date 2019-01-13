//
// Created by patpat on 2018-11-21.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_1_TRIANGLE_H
#define ASSIGNMENT_A2_PETTERJ123_1_TRIANGLE_H

#include "Shape.hpp"

class Triangle : public Shape{
public:
    Triangle();
    Triangle(float *x1,
                float *y1,
                float *x2,
                float *y2,
                float *x3,
                float *y3);

    float calculateArea();

    float getArea() override;
    float getCenterPos() override;
private:
    float *x1, *y1, *x2, *y2, *x3, *y3;
    float area;
    float circumference;
    std::string typeShape;
    float centerPosition;
};

#endif //ASSIGNMENT_A2_PETTERJ123_1_TRIANGLE_H
