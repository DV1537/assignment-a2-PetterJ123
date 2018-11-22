//
// Created by patpat on 2018-11-19.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_1_SHAPE_H
#define ASSIGNMENT_A2_PETTERJ123_1_SHAPE_H

#include <string>
#include <fstream>
#include <iostream>

class Shape {
public:
    Shape();

    ~Shape();

    Shape(std::string typeShape,
            double shapeArea,
            double xPos,
            double yPos,
            double distance,
            double circumference,
            double centPosX,
            double centPosY);

    // Custom deconstructor
    // ~Shape();    Shall take in values

    void setType(std::string type);
    std::string getType();
    void setArea(double shapeArea);
    double getArea();

    void setXPos(double xPos);
    double getXPos();

    void setYPos(double yPos);
    double getYPos();

    void setDistance(double distance);
    double getDistance();

    void setCircumference(double circumference);
    double getCircumference();

    void setCentPosX(double centPosX);
    double getCentPosX();

    void setCentPosY(double centPosY);
    double getCentPosY();

    bool isConvex();

    void printInfo();

protected:
    std::string typeShape;
    double      shapeArea;
    double      xPos;
    double      yPos;
    double      distance;
    double      circumference;
    double      centPosX;
    double      centPosY;
    bool        convexForm;
};


#endif //ASSIGNMENT_A2_PETTERJ123_1_SHAPE_H
