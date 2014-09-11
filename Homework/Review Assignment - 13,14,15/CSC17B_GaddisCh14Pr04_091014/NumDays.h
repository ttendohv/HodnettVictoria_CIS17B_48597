/* 
 * File:   NumDays.h
 * Author: rcc
 *
 * Created on September 10, 2014, 4:47 PM
 */

#ifndef NUMDAYS_H
#define	NUMDAYS_H

class NumDays {
private:
    float hours;
    float days;
public:
    NumDays(int);
    ~NumDays();
    void setHours(int);
    int getHours();
    void setDays(float);
    float getDays();
    int operator+(const NumDays&);
    int operator-(const NumDays&);
    NumDays operator++();
    NumDays operator++(int);
    NumDays operator--();
    NumDays operator--(int);

};

#endif	/* NUMDAYS_H */

