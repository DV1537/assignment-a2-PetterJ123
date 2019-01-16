//
// Created by Petter on 2019-01-14.
//

#include "Shape.hpp"

void Shape::setType(std::string& type) {
    this->type = type;
}

std::string Shape::getType() {
    return this->type;
}

bool Shape::isConvex() {
    return false;
}

float Shape::position() {
    return 0;
}

float Shape::distance() {
    return 0;
}