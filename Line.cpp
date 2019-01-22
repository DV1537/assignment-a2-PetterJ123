//
// Created by Petter on 2019-01-15.
//

#include "Line.hpp"
#include <iostream>

Line::Line() { }

Line::Line(float x1,
            float y1,
            float x2,
            float y2){
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

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

void Line::getInfo() {
    std::cout << "X1: " << this->x1 << "\n";
    std::cout << "Y1: " << this->y1 << "\n";
    std::cout << "X2: " << this->x2 << "\n";
    std::cout << "Y2: " << this->y2 << "\n";
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