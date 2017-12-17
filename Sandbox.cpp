/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sandbox.cpp
 * Author: raymar
 * 
 * Created on December 17, 2017, 4:10 PM
 */

#include "Sandbox.h"
#include <iostream>

using namespace std;


Sandbox::Sandbox(int a, int b)
:regVar(a),constVar(b)
{
    
}

//deconstructers dont take values or take parameters

Sandbox::~Sandbox()
{
  
}

void Sandbox::testMethod()
{
    cout<<"Regular variable is:"<<regVar<<endl;
    cout<<"Constant variable is:"<<constVar<<endl;
    
}

void Sandbox::constMethod()const
{
    cout<<"I have worked mate";
}

