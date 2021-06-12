/*
 * File: Demo.h
 * Author: Elijah De Vera
 * Date: 06/03/21
 * Purpose: Demo class implementation 
 */

#ifndef DEMO_H
#define DEMO_H

#include "Deck.h" 
#include "Person.h"

using namespace std; 

class Demo{
    private: 
        //game input
        char gInput; 

    public:
        //Constructor
        Demo(Person&,Deck&,char);
        
        //Printing out the contents
        void print(); 
        
        //Getting info from user
        char getInp(); 
};

#endif /* DEMO_H */