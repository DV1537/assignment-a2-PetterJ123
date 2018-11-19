#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <string>

class Shape{
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
private:
    std::string typeShape;
    double shapeArea;
    double xPos;
    double yPos;
    double distance;
};

#endif
