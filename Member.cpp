/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Member.cpp
 * Author: raymar
 * 
 * Created on December 17, 2017, 4:57 PM
 */

#include "Member.h"
#include "Test.h"
#include <string>
#include <iostream>

using namespace std;

Member::Member(string x, Test bd)
:name(x),birthdate(bd)
{
    
}

void Member::printinfo()
{
    cout<< name << " was born on ";
    birthdate.birthdayprint();
    
}

