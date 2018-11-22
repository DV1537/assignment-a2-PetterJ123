//
// Created by patpat on 2018-11-19.
//

#include "Shape.hpp"
// Default constructor, if no values are passed
Shape::Shape() {
    this->typeShape = "untitled";
    this->shapeArea = 0;
    this->xPos = 0;
    this->yPos = 0;
    this->distance = 0;
    this->circumference = 0;
    this->centPosX = 0;
    this->centPosY = 0;
}
// Custom constructor, if values are passed
Shape::Shape(std::string typeShape,
            double shapeArea,
            double xPos,
            double yPos,
            double distance,
            double circumference,
            double centPosX,
            double centPosY) {
    this->typeShape = typeShape;
    this->shapeArea = shapeArea;
    this->xPos = xPos;
    this->yPos = yPos;
    this->distance = distance;
    this->circumference = circumference;
    this->centPosX = centPosX;
    this->centPosY = centPosY;
}

Shape::~Shape(){
    std::cout << "Shape was deconstructed";
}

double Shape::getXPos() {
    return this->xPos;
}

void Shape::setXPos(double xPos) {
    this->xPos = xPos;
}

double Shape::getArea() {
    return this->shapeArea;
}

void Shape::setArea(double shapeArea) {
    this->shapeArea = shapeArea;
}

void Shape::setType(std::string type) {
    this->typeShape = type;
}

std::string Shape::getType() {
    return this->typeShape;
}

void Shape::setYPos(double yPos) {
    this->yPos = yPos;
}

double Shape::getYPos() {
    return this->yPos;
}

void Shape::setDistance(double distance) {
    this->distance = distance;
}

double Shape::getDistance() {
    return this->distance;
}

void Shape::setCircumference(double circumference) {
    this->circumference = circumference;
}

double Shape::getCircumference() {
    return this->circumference;
}

void Shape::setCentPosX(double centPosX) {
    this->centPosX = centPosX;
}

double Shape::getCentPosX() {
    return this->centPosX;
}

void Shape::setCentPosY(double centPosY) {
    this->centPosY = centPosY;
}

double Shape::getCentPosY() {
    return this->centPosY;
}

bool Shape::isConvex(){
    return true;
}

void Shape::printInfo() {
    std::cout << this->typeShape << " "
                << "Area: " << this->shapeArea << "\n"
                << "X position: " << this->xPos << "\n"
                << "Y position: " << this->yPos << "\n"
                << "Distance: " << this->distance << "\n"
                << "Circumference: " << this->circumference << "\n"
                << "Center position X: " << this->centPosX
                << "Center position Y" << this->centPosY << "\n";
}
