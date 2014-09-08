/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on August 31, 2014, 7:36 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User-defined Libraries
#include "Array.h"

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed generator
    srand(static_cast<int>(time(0)));
    //Declare variables
    Array array(5,5);
    char* stringAry = array.toString();
    //Exit
    delete []stringAry;
    return 0;
}

