#include "Shape.hpp"
#include "Triangle.hpp"

void setObject(Triangle tri,
                std::string type,
                double area,
                double xPos,
                double yPos,
                double circumference,
                double centPosX,
                double centPosY){
    tri.setType(type);
    tri.setArea(area);
    tri.setXPos(xPos);
    tri.setYPos(yPos);
    tri.setCircumference(circumference);
    tri.setCentPosX(centPosX);
    tri.setCentPosY(centPosY);
    tri.printInfo();
}

int main() {
    int count=0;
    int i=0;
    std::ifstream input;
    input.open("input.txt");

    double coord = 0.0;
    if(input.is_open()){
        std::cout << "File successfully opend!\n";
        while(input >> coord){
            count++;
            i++;
        }
    }else{
        std::cout << "File is not open!\n";
    }

    double* coordinates = new double[count];

    input.clear();
    input.seekg(0, std::ios::beg);

    for(int i=0; i<count; i++){
        input >> coordinates[i];
    }
    // Closes the file
    input.close();
    std::string type = "Triangle";
    double area = 11.4;
    double xPos = 4;
    double yPos = 3;
    double ference = 13.45;
    double centPosX = 3;
    double centPosY = 2;
    Triangle tri;
    setObject(tri, type, area, xPos, yPos, ference, centPosX, centPosY);

    return 0;
}

// TODO: classes
// -T- Create point class
// -T- Create line class
// -T- Create Polygon class
// TODO: goal
// -T- Decide all shape attributes with given points