//
// Created by patpat on 2018-11-19.
//

#include "Shape.hpp"

float Shape::getCircumference() {
    return this->circumference;
}

std::string Shape::getType() {
    return this->typeShape;
}

Shape::~Shape() {
    std::cout << "Destroyed shape";
}
