#include "Shape.hpp"
#include "Triangle.hpp"
#include "Vector.hpp"

int main() {
    std::ifstream input;
    input.open("input.txt");

    int count = 0;
    double coord = 0.0;
    if(input.is_open()){
        std::cout << "File successfully opend!\n";
        while(input >> coord){
            count++;
        }
    }else{
        std::cout << "File is not open!\n";
    }

    if(count%2==0){
        std::cout << "Even number of coordinates\n";
    }else{
        std::cout << "Odd number of coordinates\n";
    }

    // Starts at the beginning of the file
    input.clear();
    input.seekg(0, std::ios::beg);

    float * coordinates;
    coordinates = new float[count];

    for(int i=0; i<count; ++i){
        input >> coordinates[i];
    }

    // Closes the file
    input.close();

    for(int i=0; i<count; ++i){
        std::cout << coordinates[i] << " ";
    }
    std::cout << "\n";

    int newCount = count/2;
    newCount++;
    float * coordinatesX = new float[newCount];

    float * coordinatesY = new float[newCount];

    int evenCounter=0;
    int oddCounter=0;
    for(int i=0; i<count; ++i){
        if(i%2==0){
            coordinatesX[evenCounter] = coordinates[i];
            evenCounter++;
        }else{
            coordinatesY[oddCounter] = coordinates[i];
            oddCounter++;
        }
    }

    std::cout << "X coordinates: ";
    for(int i=0; i<evenCounter; ++i){
        std::cout << coordinatesX[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Y coordinates: ";
    for(int i=0; i<oddCounter; ++i){
        std::cout << coordinatesY[i] << " ";
    }

    delete coordinates;
    delete [] coordinatesX;
    delete [] coordinatesY;

    return 0;
}