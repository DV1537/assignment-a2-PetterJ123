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
    void setType(std::string type);
    std::string getType();
    void setArea(double);
    double getArea();

    void setXPos(double);
    double getXPos();

    void setYPos(double);
    double getYPos();

    void setDistance(double);
    double getDistance();

    void setCircumreference(double);
    double getCircumreference();

    void setCentPos(double);
    double getCentPos();

private:
    std::string typeShape;
    double shapeArea;
    double xPos;
    double yPos;
    double distance;
    double circumference;
    double centPos;
};


#endif //ASSIGNMENT_A2_PETTERJ123_1_SHAPE_H
