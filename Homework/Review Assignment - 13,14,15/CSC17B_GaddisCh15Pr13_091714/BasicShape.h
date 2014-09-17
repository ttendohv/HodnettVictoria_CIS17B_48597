/* 
 * File:   BasicShape.h
 * Author: rcc
 *
 * Created on September 17, 2014, 11:44 AM
 */

#ifndef BASICSHAPE_H
#define	BASICSHAPE_H

class BasicShape {
private:
    float area;
public:
    void setArea(float a){
        area=a;
    }
    float getArea(){
        return area;
    }
    virtual void calcArea()=0;
};

#endif	/* BASICSHAPE_H */

