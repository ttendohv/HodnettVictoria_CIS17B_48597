/* 
 * File:   Circle.cpp
 * Author: rcc
 * 
 * Created on September 17, 2014, 11:44 AM
 */

#include "Circle.h"

Circle::Circle(long int x,long int y,float rad){
    centerX=x;
    centerY=y;
    radius=rad;
    calcArea();
}

void Circle::calcArea(){
    setArea(3.14159 * radius * radius);
}
