/* 
 * File:   NumDays.cpp
 * Author: rcc
 * 
 * Created on September 10, 2014, 4:47 PM
 */

#include "NumDays.h"

NumDays::NumDays(int hrs){
    //Set hours
    setHours(hrs);
    //Calculate and set days
    setDays(hours/8);
}
NumDays::~NumDays(){
    
}
void NumDays::setHours(int h){
    hours = h;
}
int NumDays::getHours(){
    return hours;
}
void NumDays::setDays(float d){
    days = d;
}
float NumDays::getDays(){
    return days;
}
int NumDays::operator+(const NumDays &obj){
    return hours + obj.hours;
}
int NumDays::operator-(const NumDays &obj){
    int temp = hours - obj.hours;
    if(temp<0)return -temp;
    else return temp;
}
NumDays NumDays::operator++(){
    ++hours;
    days = hours/8;
    return *this;
}
NumDays NumDays::operator++(int){
    NumDays temp(hours);
    hours++;
    days = hours/8;
    return temp;
}
NumDays NumDays::operator--(){
    --hours;
    days = hours/8;
    return *this;
}
NumDays NumDays::operator--(int){
    NumDays temp(hours);
    hours--;
    days = hours/8;
    return temp;
}

