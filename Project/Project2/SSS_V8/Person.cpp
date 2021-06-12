/*
 * File: computer.cpp
 * Author: Elijah De Vera
 * Date: 06/08/21
 * Purpose: Person class implementation
 */

//system libraries
#include <iostream>
using namespace std; 

//user libraries
#include "Person.h"

//base class to derived
void Person::pHand(){
    cout<<this->name<<"'s Hand"<<endl; 
    Player::pHand(); 
}

//setting age
void Person::setAge(int n){
    age=n; 
}

//returning age 
int Person::getAge(){
    return age; 
}

//polymorphic
string Person::getName(){
    return this->name; 
}