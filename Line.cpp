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
    std::cout << this->x1 << "\n";
    std::cout << this->y1 << "\n";
    std::cout << this->x2 << "\n";
    std::cout << this->y2 << "\n";
}