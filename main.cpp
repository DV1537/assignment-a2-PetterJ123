#include "Shape.hpp"

int main(){
    Shape shape;
    std::string shapeType = "I am a shape\n";
    double xpos = 3.2;
    double ypos = 2.2;

    shape.setType(shapeType);
    shape.setXPos(xpos);
    shape.setYPos(ypos);

    std::cout << shape.getType();

    std::cout << "\nWith a x and y position " << shape.getXPos() << " " << shape.getYPos() << "\n";

    return 0;
}
