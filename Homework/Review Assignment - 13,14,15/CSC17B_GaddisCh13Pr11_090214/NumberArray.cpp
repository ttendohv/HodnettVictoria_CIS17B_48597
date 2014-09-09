/* 
 * File:   NumberArray.cpp
 * Author: rcc
 * 
 * Created on September 2, 2014, 11:04 AM
 */

#include "NumberArray.h"

NumberArray::NumberArray(int n){
    setSize(n);
    
    array = new float[size];
    //Initialize
    for(int i=0;i<size;i++){
        array[i] = -1.0;
    }
}
    
float NumberArray::getMax(){
    float max = array[0];
    for(int i=1;i<size;i++){
        if(max<array[i])
            max = array[i];
    }
    return max;
}
    
float NumberArray::getMin(){
    float min = array[0];
    for(int i=1;i<size;i++){
        if(min>array[i])
            min = array[i];
    }
    return min;
}
    
float NumberArray::getAverage(){
    int elements = 0;
    float sum = 0;
    
    for(int i=0;i<size;i++){
        if(array[i]!=-1){
            elements++;
            sum += array[i];
        }
    }
    
    //Return average
    return sum/elements;
}

