//
// Created by patSurface on 2018-11-26.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_VECTOR_H
#define ASSIGNMENT_A2_PETTERJ123_VECTOR_H

class Vector{
private:
    float x, y;

public:
    void setY(float y);
    void setX(float x);
    float getY();
    float getX();
    float distance(Vector &vectorptr, Vector &vectorptr1);
    Vector();
    Vector(float x, float y);
    ~Vector();
};

#endif //ASSIGNMENT_A2_PETTERJ123_VECTOR_H
