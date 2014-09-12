/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on September 10, 2014, 4:46 PM
 * Gaddis Chapter 14 Problem 04
 * NumDays Class
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User-defined Libraries
#include "NumDays.h"

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare variables
    int hrs1,hrs2;
    float days;
    //Input hours worked
    srand(static_cast<int>(time(0)));
    hrs1 = rand()%25;
    //Declare NumDays variable and input hours
    NumDays work1(hrs1);
    //Output hours and days worked:
    cout << endl;
    cout << "Worker 1--" << endl;
    cout << "Hours worked: " << work1.getHours() << endl;
    cout << "Days worked: " << work1.getDays() << endl;
    //Create a new set of ours and NumDays variable
    hrs2 = rand()%25;
    NumDays work2(hrs2);
    //Output hours and days worked:
    cout << endl;
    cout << "Worker 2--" << endl;
    cout << "Hours worked: " << work2.getHours() << endl;
    cout << "Days worked: " << work2.getDays() << endl;
    //Add both NumDays objects
    int totHrs = work1 + work2;
    cout << endl;
    cout << "Hours added from both individuals: " << totHrs << endl;
    //Find the difference in hours
    int difHrs = work1 - work2;
    cout << endl;
    cout << "Difference of hours worked between individuals: " << difHrs << endl;
    /*
     * Create extra variables to properly demonstrate how prefix and postfix 
     * increment and decrement operators work.
     */
    NumDays before(0);
    
    //Increment (and decrement) hours from each individual
    //Prefix increment
    cout << "Prefix: " << endl;
    before=++work1;
    cout << "Incremented Worker1 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Incremented Worker1:\n Hours: " << work1.getHours() << "\n Days: "
            << work1.getDays() << endl;
    
    cout << endl;
    cout << "Prefix: " << endl;
    before=++work2;
    cout << "Incremented Worker2 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Incremented Worker2:\n Hours: " << work2.getHours() << "\n Days: "
            << work2.getDays() << endl;
    
    //Prefix decrement
    cout << endl;
    cout << "Prefix: " << endl;
    before=--work1;
    cout << "Decremented Worker1 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Decremented Worker1:\n Hours: " << work1.getHours() << "\n Days: "
            << work1.getDays() << endl;    
    
    cout << endl;
    cout << "Prefix: " << endl;
    before=--work2;
    cout << "Decremented Worker2 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Decremented Worker2:\n Hours: " << work2.getHours() << "\n Days: "
            << work2.getDays() << endl;
    
    //Postfix increment
    cout << endl;
    cout << "Postfix:" << endl;
    before=work1++;
    cout << "Incremented Worker1 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Incremented Worker1:\n Hours: " << work1.getHours() << "\n Days: "
            << work1.getDays() << endl;    
    
    cout << endl;
    cout << "Postfix: " << endl;
    before=work2++;
    cout << "Incremented Worker2 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Incremented Worker2:\n Hours: " << work2.getHours() << "\n Days: "
            << work2.getDays() << endl;
    
    //Postfix decrement
    cout << endl;
    cout << "Postfix:" << endl;
    before=work1--;
    cout << "Decremented Worker1 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Decremented Worker1:\n Hours: " << work1.getHours() << "\n Days: "
            << work1.getDays() << endl;    
    
    cout << endl;
    cout << "Postfix:" << endl;
    before=work2--;
    cout << "Decremented Worker2 assigned to new variable:\n Hours: " << before.getHours()
            << "\n Days: " << before.getDays() << endl;
    cout << "Decremented Worker2:\n Hours: " << work2.getHours() << "\n Days: "
            << work2.getDays() << endl;
    return 0;
}

