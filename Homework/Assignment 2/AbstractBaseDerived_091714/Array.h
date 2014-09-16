/* 
 * File:   Array.h
 * Author: Victoria
 *
 * Created on August 31, 2014, 7:38 PM
 */

#ifndef ARRAY_H
#define	ARRAY_H
#include "abstrarray.h"

class Array {
private:
    int nRows;
    int nCols;
    int **array;
    char *strAry;
public:
    Array();
    Array(int,int);
    ~Array();
    void setRows(int);
    void setCols(int);
    void fill_array(int,int);
    char* toString();
    char* getStrAry(){
        return strAry;
    }
};

#endif	/* ARRAY_H */

