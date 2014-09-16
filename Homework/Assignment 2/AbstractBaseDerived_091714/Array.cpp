/* 
 * File:   Array.cpp
 * Author: Victoria
 * 
 * Created on August 31, 2014, 7:38 PM
 */

#include "Array.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Array::Array(){
    nRows = 0;
    nCols = 0;
}
    
Array::Array(int x,int y){
    setRows(x);
    setCols(y);
    fill_array(x,y);
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

void Array::fill_array(int r,int c){
    //Allocate memory
    array = new int*[r];
    for(int i=0;i<r;i++){
        array[i] = new int [c];
    }
    //Fill 2-D Array
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            array[i][j] = rand()%90+10;
            //Test array input
            //cout << array[i][j] << endl;
        }
    }
}

char* Array::toString(){
    int size = (nRows * nCols * 3);
    char *stringAry = new char [size+1];
    int index = 0;
    ostringstream sstr;
    string temp;
    for(int i=0;i<nRows;i++){
        for(int j=0;j<nCols;j++){
            sstr << array[i][j];
            temp = sstr.str();
            stringAry[index++] = temp[0];
            stringAry[index++] = temp[1];
            stringAry[index++] = ' ';
            sstr.str("");
        }
    }
    stringAry[index]='\0';
    strAry=stringAry;
    return stringAry;
}


