#include "Shape.hpp"

void Shape::setType(std::string type){
    typeShape = type;
}

std::string Shape::getType(void){
    return typeShape;
}

void Shape::setArea(double area){
    shapeArea = area;
}

double Shape::getArea(){
    return shapeArea;
}

void Shape::setXPos(double xp){
    xPos = xp;
}

double Shape::getXPos(){
    return xPos;
}

void Shape::setYPos(double yp){
    yPos = yp;
}

double Shape::getYPos(){
    return yPos;
}

void Shape::setDistance(double dis){
    distance = dis;
}

double Shape::getDistance(){
    return distance;
}
