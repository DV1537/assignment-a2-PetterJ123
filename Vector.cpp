//
// Created by patSurface on 2018-11-26.
//

#include "Vector.hpp"

float Vector::getX() {
    return x;
}

float Vector::getY() {
    return y;
}

void Vector::setX(float x) {
    Vector::x = x;
}

void Vector::setY(float y) {
    Vector::y = y;
}

float Vector::distance(Vector &vectorptr, Vector &vectorptr1) {
    float x0 = vectorptr.getX();
    float y0 = vectorptr.getY();

    float x1 = vectorptr1.getX();
    float y1 = vectorptr1.getY();
    float xdiff;
    float ydiff;

    if(x0>x1){
        xdiff = x0 - x1;
    }else{
        xdiff = x1 - x0;
    }

    if(y0>y1){
        ydiff = y0 - y1;
    }else{
        ydiff = y1 - y0;
    }

    float distance = ((xdiff*xdiff) - (ydiff*ydiff));

    return distance;
}

Vector::Vector() {
    this->setX(0.0f);
    this->setY(0.0f);
}

Vector::Vector(float x, float y) {
    this->x = x;
    this->y = y;
}

Vector::~Vector() {

}


