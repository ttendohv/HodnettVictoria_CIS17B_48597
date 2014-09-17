/* 
 * File:   Rectangle.h
 * Author: rcc
 *
 * Created on September 17, 2014, 11:45 AM
 */

#ifndef RECTANGLE_H
#define	RECTANGLE_H
#include "BasicShape.h"

class Rectangle : public BasicShape {
    private:
        long int width;
        long int length;
    public:
        Rectangle(long int,long int);
        long int getWidth(){
            return width;
        }
        long int getLength(){
            return length;
        }
        void calcArea();
};

#endif	/* RECTANGLE_H */

