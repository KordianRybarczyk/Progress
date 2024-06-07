//
// Created by student on 07.06.2024.
//

#ifndef UNTITLED23_VECTOR_H
#define UNTITLED23_VECTOR_H
#pragma once
#include <string>

class Vector
{

private:
static double v_x;
static double v_y;

public:
    Vector();
    Vector(double x = 0, double y = 0);
    static void setXY(double x, double y);
    static double getX();
    static double getY();
    static void show();
    static double lenght();
    static double angle();
};

#endif //UNTITLED23_VECTOR_H
