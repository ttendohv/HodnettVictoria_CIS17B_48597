/* 
 * File:   Array.h
 * Author: Victoria
 *
 * Created on August 31, 2014, 7:38 PM
 */

#ifndef ARRAY_H
#define	ARRAY_H

class Array {
private:
    int nRows;
    int nCols;
    int **array;
    char *strAry;
    int strLength;
public:
    Array();
    Array(int,int);
    ~Array();
    void setRows(int);
    void setCols(int);
    void fill_array(int,int);
    char* toString();
};

#endif	/* ARRAY_H */

