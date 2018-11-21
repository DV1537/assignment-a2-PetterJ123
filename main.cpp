#include "Shape.h"

int main() {
    int count=0;
    int i;
    std::ifstream input;
    input.open("input.txt");

    double coord = 0.0;
    std::string delim;
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

    for(int i=0; i<count; i++){
        std::cout << coordinates[i] << "\n";
    }

    return 0;
}