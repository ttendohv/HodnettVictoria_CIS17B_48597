/* 
 * File:   Rectangle.cpp
 * Author: rcc
 * 
 * Created on September 17, 2014, 11:45 AM
 */

#include "Rectangle.h"

Rectangle::Rectangle(long int w,long int l){
    width=w;
    length=l;
    calcArea();
}

void Rectangle::calcArea(){
    setArea(width * length);
}
