/* 
 * File:   Circle.h
 * Author: rcc
 *
 * Created on September 17, 2014, 11:44 AM
 */

#ifndef CIRCLE_H
#define	CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape {
    private:
        long int centerX;
        long int centerY;
        float radius;
    public:
        Circle(long int,long int,float);
        long int getCenterX(){
            return centerX;
        }
        long int getCenterY(){
            return centerY;
        }
        void calcArea();
};

#endif	/* CIRCLE_H */

