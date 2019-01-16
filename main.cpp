//
// Created by Petter on 2019-01-13.
//

#include <iostream>
#include <fstream>
#include "Vector.hpp"
#include "Shape.hpp"
#include "Triangle.hpp"

int main(){
    std::fstream fileStream;

    fileStream.open("input.txt");

    int numOfCoordinates = 0;
    std::string readLine;

    if(fileStream.is_open()){
        std::cout << "File successfully opend!\n";
        while(fileStream >> readLine){
            numOfCoordinates++;
        }
    }else{
        std::cout << "File is not open, closing program." << "\n";
    }

    float* coordinates;
    coordinates = new float[numOfCoordinates];

    // Clears filestream and puts pointer at the beginning
    fileStream.clear();
    fileStream.seekg(0, std::ios::beg);

    // Inserting coordinates into an array
    for(int i=0; i<numOfCoordinates; ++i){
        fileStream >> coordinates[i];
    }

    fileStream.close();

    int newNumOfCoords = numOfCoordinates / 2;

    int evenCounter = 0;
    int oddCounter = 0;
    float* coordinatesX = new float[newNumOfCoords];
    float* coordinatesY = new float[newNumOfCoords];

    // Seperates X coordinates from the Y-coordinates
    for(int i=0; i<numOfCoordinates; ++i){
        if(i%2==0){
            coordinatesX[evenCounter] = coordinates[i];
            evenCounter++;
        }else{
            coordinatesY[oddCounter] = coordinates[i];
            oddCounter++;
        }
    }

    delete [] coordinates;

    Vector* verts = new Vector[numOfCoordinates];

    // Sets vertecies to their respective value
    for(int i=0; i<numOfCoordinates; ++i){
        verts[i].setX(coordinatesX[i]);
        verts[i].setY(coordinatesY[i]);
    }

    delete [] coordinatesX;
    delete [] coordinatesY;

    Line* lines = new Line[newNumOfCoords];

    for(int i=0; i<newNumOfCoords; ++i){
        lines[i].setX1(verts[i].getX());
        lines[i].setY1(verts[i].getY());
        lines[i].setX2(verts[i].getX());
        lines[i].setY2(verts[i].getY());
    }

    /*lines[0].getInfo();
    std::cout << "\n";
    lines[1].getInfo();
    std::cout << "\n";
    lines[2].getInfo();
    std::cout << "\n";*/

    return 0;
}
