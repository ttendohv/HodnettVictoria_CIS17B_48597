/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on September 02, 2014, 11:03 AM
 * Gaddis Chapter 13 Problem 11
 * Number Array Class
 */

//System Libraries
#include <iostream>
using namespace std;

//User-defined Libraries
#include "NumberArray.h"

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare variables
    int size=10;
    NumberArray numAry(size);
    int input;
    float num;
    //Use functions
    cout << "Enter in " << size << " floating-point numbers, pressing the "
            "Enter key after each." << endl << endl;
    for(int i=0;i<size;i++){
        cin >> num;
        numAry.storeElem(i,num);
    }
    cout << endl;
    cout << "Enter in a number between 0 and " << size-1 << " to view any "
            "element in the array. ";
    cin >> input;
    cout << "The number: " << numAry.getElem(input) << " is at location " << input
            << " of this array." << endl;
    cout << "The min of this array is " << numAry.getMin() << endl;
    cout << "The max of this array is " << numAry.getMax() << endl;
    cout << "The average of this array is " << numAry.getAverage() << endl;
    //Exit
    return 0;
}

