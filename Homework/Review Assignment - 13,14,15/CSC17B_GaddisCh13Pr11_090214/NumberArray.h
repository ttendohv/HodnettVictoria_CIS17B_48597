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
    ~NumberArray(){
        delete [] array;
    }
    void setSize(int n){
        size = n;
    }
    void storeElem(int n,float num){
        array[n] = num;
    }
    float getElem(int n){
        return array[n];
    }
    float getMax();
    float getMin();
    float getAverage();
};

#endif	/* NUMBERARRAY_H */

