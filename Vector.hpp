//
// Created by Petter on 2019-01-14.
//

#ifndef ASSIGNMENT_A2_PETTERJ123_VECTOR_H
#define ASSIGNMENT_A2_PETTERJ123_VECTOR_H

class Vector{
public:
    Vector();
    Vector(float x, float y);
    ~Vector();
    void setX(float &x);
    void setY(float &y);
    float getX() const;
    float getY() const;

private:
    float x;
    float y;
};


#endif //ASSIGNMENT_A2_PETTERJ123_VECTOR_H
