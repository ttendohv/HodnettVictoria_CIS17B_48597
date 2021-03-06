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
#include <QApplication>
#include <QLabel>
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
    Array array(5,5);//Array with 5 rows and 5 cols
    char* stringAry = array.toString();//convert array of numbers to a string

    //Output-test
    //cout << endl;
    //for(int i=0;i<strlen(stringAry);i++){
    //    cout << stringAry[i] << endl;
    //}

    //Q
    QApplication app(argc, argv);
    QLabel *label = new QLabel(stringAry);
    label->show();
    return app.exec();

    //Exit
    delete []stringAry;
    return 0;
}

