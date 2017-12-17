/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Member.h
 * Author: raymar
 *
 * Created on December 17, 2017, 4:57 PM
 */

#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include "Test.h"

using namespace std;

class Member{
    
public:
    Member(string x, Test bd);
    void printinfo();
    
private:
    string name;
    Test birthdate;
    
    
    
};

#endif /* MEMBER_H */
