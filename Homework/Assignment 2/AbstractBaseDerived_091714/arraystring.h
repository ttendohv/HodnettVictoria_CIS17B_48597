#ifndef ARRAYSTRING_H
#define ARRAYSTRING_H
#include "Array.h"

class ArrayString : public Array
{
public:
    ArrayString(int x,int y):Array(x,y){};
    int toPrint(int,char**);
};

#endif // ARRAYSTRING_H
