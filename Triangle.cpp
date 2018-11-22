//
// Created by patpat on 2018-11-21.
//

#include "Triangle.hpp"


Triangle::Triangle(double x1Pos,
                    double y1Pos,
                    double x2Pos,
                    double y2Pos,
                    double x3Pos,
                    double y3Pos) : Shape(
                                        typeShape,
                                        shapeArea,
                                        xPos,
                                        yPos,
                                        distance,
                                        circumference,
                                        centPosX,
                                        centPosY){

}

Triangle::~Triangle() {
    // Destruct object, free memory a.s.o
    std::cout << this->typeShape << " got deconstructed\n";
}

Triangle::Triangle() {
    this->x1Pos = 0;
    this->y1Pos = 0;
    this->x2Pos = 0;
    this->y2Pos = 0;
    this->x3Pos = 0;
    this->y3Pos = 0;
}
