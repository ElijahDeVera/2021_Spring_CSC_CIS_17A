/*
 * File: computer.cpp
 * Author: Elijah De Vera
 * Date: 06/08/21
 * Purpose: Computer class implementation
 */

//system libraries
#include <iostream>
using namespace std; 

//user libraries
#include "Computer.h"

//retrieving Computer elements
string Computer::getId(){
    return idNum; 
}
float Computer::getCNum(){
    return cNum; 
}

//operator overloading
void Computer::operator+(Computer &cp){
    cp.cNum++; 
}
void Computer::operator-(Computer &cp){
    cp.cNum++; 
}

//base class to derived
void Computer::pHand(){
    cout<<name<<"'s Hand"<<endl; 
    Player::pHand(); 
}
void Computer::setName(string n){
    string c="Computer "; 
    Player::setName(c+n); 
}

//polymorphic
string Computer::getName(){
    return name; 
}

//Definition of the static member variable outside of the class 
float Computer::cNum=1; 