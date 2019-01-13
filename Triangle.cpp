//
// Created by patpat on 2018-11-21.
//

#include "Triangle.hpp"
#include <math.h>

Triangle::Triangle() {}

float Triangle::calculateArea() {

    return 0;
}

Triangle::Triangle(float *x1,
                    float *y1,
                    float *x2,
                    float *y2,
                    float *x3,
                    float *y3) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->x3 = x3;
    this->y3 = y3;
}

float Triangle::getCenterPos() {
    return this->centerPosition;
}

float Triangle::getArea() {
    return this->area;
}

