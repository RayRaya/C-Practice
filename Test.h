/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.h
 * Author: raymar
 *
 * Created on December 17, 2017, 4:57 PM
 */

#ifndef TEST_H
#define TEST_H

class Test
{
public:
    Test(int m,int d,int y);
    void birthdayprint();
private:
    int month;
    int day;
    int year;
};
#endif /* TEST_H */
