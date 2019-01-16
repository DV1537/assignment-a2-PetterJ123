//
// Created by Petter on 2019-01-14.
//

#include "Triangle.hpp"

Triangle::Triangle() {
    this->l1.setX1(0.0f);
    this->l1.setY1(0.0f);
    this->l1.setX2(0.0f);
    this->l1.setY2(0.0f);
    this->l2.setX1(0.0f);
    this->l2.setY1(0.0f);
    this->l2.setX2(0.0f);
    this->l2.setY2(0.0f);
    this->l3.setX1(0.0f);
    this->l3.setY1(0.0f);
    this->l3.setX2(0.0f);
    this->l3.setY2(0.0f);
}

float Triangle::calculateCircumference(Line *lines) {
    return 0;
}

float Triangle::calculateArea(Line *lines) {
    return 0;
}