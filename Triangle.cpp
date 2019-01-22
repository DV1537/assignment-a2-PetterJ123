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

float Triangle::calculateCircumference() {
    return 0;
}

float Triangle::calculateArea() {

    return 0;
}

float Triangle::distance() {
    return 0.0f;
}

void Triangle::setType(std::string &type){
    type = type;
}

float Triangle::position() {
    return 0.0f;
}

bool Triangle::isConvex() {
    return false;
}

void Triangle::setL1(Line l1) {
    this->l1 = l1;
}

void Triangle::setL2(Line l2) {
    this->l2 = l2;
}

void Triangle::setL3(Line l3) {
    this->l3 = l3;
}