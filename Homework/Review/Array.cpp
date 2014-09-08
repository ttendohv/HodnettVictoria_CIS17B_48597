/* 
 * File:   Array.cpp
 * Author: Victoria
 * 
 * Created on August 31, 2014, 7:38 PM
 */

#include "Array.h"
#include <cstdlib>
#include <ctime>

Array::Array(){
    nRows = 0;
    nCols = 0;
}
    
Array::Array(int x,int y){
    setRows(x);
    setCols(y);
    
    //Fill 2-D Array
    setArray(x,y);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            array[i][j] = rand()%90+10;
        }
    }
}
    
Array::~Array(){
    for(int i=0;i<nCols;i++)
        delete [] array[nRows];
    delete [] array;
}
    
void Array::setRows(int r){
    nRows = r;
}
    
void Array::setCols(int c){
    nCols = c;
}
    
void Array::setArray(int r,int c){
    //Allocate memory
    array = new int*[r];
    for(int i=0;i<r;i++){
        array[i] = new int [c];
    }
}

char* Array::toString(){
    char *stringAry = new char [nRows * nCols];
    for(int i=0;i<nRows;i++){
        for(int j=0;j<nCols;j++){
            stringAry[i*nCols+j] = array[i][j];
        }
    }
    return stringAry;
}

