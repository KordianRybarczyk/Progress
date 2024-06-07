#include <iostream>
#include "Vector.h"
#include <math.h>
using namespace std;

double Vector::v_x;
double Vector::v_y;

Vector::Vector(){
        v_x = 0;
        v_y=0;
}
Vector(double x , double y ){
    v_x = x;
    v_y=y;
}
void Vector::setXY(double x, double y) {
    v_x = x;
    v_y = y;
}
double Vector::getX() {
    return v_x;
}

double Vector::getY() {
    return v_y;
}
void Vector::show() {
    cout<<"Vector: ["<<getX()<< getY()<<endl;
}
double Vector::lenght() {
        return sqrt(v_x*v_x+v_y*v_y);
};
double Vector::angle() {
    double rad=atan2(v_y,v_x);
    double deg = (rad*180) / M_PI;
    return deg;
}


