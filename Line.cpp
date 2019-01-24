//
// Created by Petter on 2019-01-15.
//

#include "Line.hpp"
#include <iostream>

Line::Line() { }

void Line::setX1(float x1) {
    this->x1 = x1;
}

void Line::setY1(float y1) {
    this->y1 = y1;
}

void Line::setX2(float x2) {
    this->x2 = x2;
}

void Line::setY2(float y2) {
    this->y2 = y2;
}

float Line::getX1() const {
    return this->x1;
}

float Line::getY1() const {
    return this->y1;
}

float Line::getX2() const {
    return this->x2;
}

float Line::getY2() const {
    return this->y2;
}

float Line::getLength() const {
    return this->length;
}

void Line::setLength(float leng) {
    this->length = leng;
}

float Line::calculateArea() {

    return 0;
}

float Line::calculateCircumference() {
    return 0;
}

float Line::distance() {
    return 0.0f;
}

float Line::position() {
    return 0;
}

bool Line::isConvex() {
    return false;
}

void Line::setType(std::string &type) {

}
