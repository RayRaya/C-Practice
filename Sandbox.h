/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sandbox.h
 * Author: raymar
 *
 * Created on December 17, 2017, 4:10 PM
 */

#ifndef SANDBOX_H
#define SANDBOX_H

class Sandbox
{
public:
    Sandbox(int a, int b);
    ~Sandbox();
    void print();
    void testMethod();
    void constMethod() const;
protected:
    
private:
    int regVar;
    const int constVar;
};

#endif /* SANDBOX_H */
