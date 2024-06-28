#include "lib.h"

double cylinderVolume(double r, double h){
    double volume;
    volume = circleArea(r) * h;
    return volume;
}

double circleArea(double r){
    double area;
    area = PI * r * r;
    return area;
}