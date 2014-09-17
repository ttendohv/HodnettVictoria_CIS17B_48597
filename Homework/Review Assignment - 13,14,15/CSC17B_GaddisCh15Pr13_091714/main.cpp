/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on September 17, 2014, 11:44 AM
 * Gaddis Chapter 15 Problem 13
 * Pure Abstract Base Class Project 
 */

//System Libraries
#include <iostream>
using namespace std;

//User defined Libraries
#include "Circle.h"
#include "Rectangle.h"

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare variables
    long int cenX, cenY, width, length;
    float radius;
    char choice;
    
    //User input
    cout << "Type in the corresponding number to calculate the area:\n"
            " 1. Circle\n"
            " 2. Rectangle\n";
    cin >> choice;
    cout << endl;
    
    if(choice=='1'){
        cout << "Enter in the x-coordinate: ";
        cin >> cenX;
        cout << "Enter in the y-coordinate: ";
        cin >> cenY;
        cout << "Enter in the radius of the circle: ";
        cin >> radius;
        cout << endl;
        
        Circle circle(cenX,cenY,radius);
        cout << "The area of the circle is " << circle.getArea() << endl;
    }else if(choice=='2'){
        cout << "Enter in the width: ";
        cin >> width;
        cout << "Enter in the length: ";
        cin >> length;
        cout << endl;
        
        Rectangle rectangle(width,length);
        cout << "The area of the rectangle is " << rectangle.getArea() << endl;
    }else{
        cout << "Invalid choice" << endl;
    }
    return 0;
}

