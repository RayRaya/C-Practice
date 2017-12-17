/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.cpp
 * Author: raymar
 * 
 * Created on December 17, 2017, 4:57 PM
 */

#include "Test.h"
#include <iostream>

using namespace std;

Test::Test(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Test::birthdayprint()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
    
}
