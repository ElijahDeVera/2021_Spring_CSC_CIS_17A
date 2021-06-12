/*
 * File: Demo.h
 * Author: Elijah De Vera
 * Date: 06/03/21
 * Purpose: Demo class implementation 
 */

#ifndef DEMO_H
#define DEMO_H

#include "Deck.h" 
#include "Player.h"

using namespace std; 

class Demo{
    private: 
        string dInput;   //demo input
        string gInput;   //game input
        Player player;  //new player
        
    public:
        //Constructor
        Demo(string,int,Deck&,string,string);
        
        //Printing out the contents
        void print(); 
        
        //Getting info from user
        string getDeIn(){
            return dInput; 
        }
        string getGaIn(){
            return gInput;
        }
};

#endif /* DEMO_H */

