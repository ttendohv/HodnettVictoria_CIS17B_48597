/* 
 * File:   NumberArray.h
 * Author: rcc
 *
 * Created on September 2, 2014, 11:04 AM
 */

#ifndef NUMBERARRAY_H
#define	NUMBERARRAY_H

class NumberArray {
private:
    int size;
    float *array;
public:
    NumberArray(int);
    ~NumberArray();
    void setSize(int);
    void storeElem(int,float);
    float getElem(int);
    float getMax();
    float getMin();
    float getAverage();
};

#endif	/* NUMBERARRAY_H */

