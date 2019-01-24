//
// Created by Petter on 2019-01-14.
//

#include "Vector.hpp"

Vector::Vector(){
    this->x = 0.0f;
    this->x = 0.0f;
}

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

float Vector::calculateArea() {
    this->distance();
    return 0;
}

float Vector::calculateCircumference() {
    return 0;
}

float Vector::distance() {
    /*float unsquaredX = 0.0f,
            unsquaredY = 0.0f,
            unrootedDistance = 0.0f,
            distance = 0.0f;

    if(l1.getY2() >= l1.getY1() && l1.getX2() > l1.getX1()){
        unsquaredY = (l1.getY2() - l1.getY1());
        unsquaredX = (l1.getX2() - l1.getX1());
    }else{
        unsquaredY = (l1.getY1() - l1.getY2());
        unsquaredX = (l1.getX1() - l1.getX2());
    }

    unrootedDistance = (powf(unsquaredY, 2)) + (powf(unsquaredX, 2));
    distance = sqrtf(unrootedDistance);

    l1.setLength(distance);
    std::cout << l1.getLength() << "\n";

    return distance;*/
}

float Vector::position() {
    return 0;
}

bool Vector::isConvex() {
    return false;
}

void Vector::setType(std::string &type) {
    this->type = type;
}

float distance() {
    return 0.0f;
}