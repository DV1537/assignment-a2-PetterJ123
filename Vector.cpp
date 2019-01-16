//
// Created by Petter on 2019-01-14.
//

#include "Vector.hpp"

Vector::Vector(float x, float y){
    this->x = x;
    this->y = y;
}

Vector::Vector(){
    this->x = 0.0f;
    this->x = 0.0f;
}

Vector::~Vector(){ }

void Vector::setX(float &x) {
    this->x = x;
}

void Vector::setY(float &y){
    this->y = y;
}

float Vector::getY() const {
    return this->y;
}

float Vector::getX() const {
    return this->x;
}

float distance() {
    return 0.0f;
}