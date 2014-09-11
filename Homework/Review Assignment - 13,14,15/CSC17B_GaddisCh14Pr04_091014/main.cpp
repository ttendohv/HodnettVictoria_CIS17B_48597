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
    
    //Increment (and decrement) hours from each individual
    //Prefix increment
    ++work1;
    ++work2;
    cout << "Prefix: " << endl;
    cout << "After incrementing, Worker 1-- " << work1.getHours() << " hours and "
            << work1.getDays() << " days " << endl;
    cout << "After incrementing, Worker 2-- " << work2.getHours() << " hours and "
            << work2.getDays() << " days " << endl;
    //Prefix decrement
    --work1;
    --work2;
    cout << "Prefix: " << endl;
    cout << "After decrementing, Worker 1-- " << work1.getHours() << " hours and "
            << work1.getDays() << " days " << endl;
    cout << "After decrementing, Worker 2-- " << work2.getHours() << " hours and "
            << work2.getDays() << " days " << endl;
    //Postfix increment
    work1++;
    work2++;
    cout << "Postfix: " << endl;
    cout << "After incrementing, Worker 1-- " << work1.getHours() << " hours and "
            << work1.getDays() << " days " << endl;
    cout << "After incrementing, Worker 2-- " << work2.getHours() << " hours and "
            << work2.getDays() << " days " << endl;
    //Postfix decrement
    work1--;
    work2--;
    cout << "Postfix: " << endl;
    cout << "After decrementing, Worker 1-- " << work1.getHours() << " hours and "
            << work1.getDays() << " days " << endl;
    cout << "After decrementing, Worker 2-- " << work2.getHours() << " hours and "
            << work2.getDays() << " days " << endl;
    return 0;
}

