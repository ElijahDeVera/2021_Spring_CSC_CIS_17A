/*
 * File: hand.cpp
 * Author: Elijah De Vera
 * Date: 06/08/21
 * Purpose Hand Class implementation
 */

//User libraries
#include "Hand.h"
#include "Deck.h"

//System Libraries
#include <iostream>
using namespace std; 

void Hand::dscard(int card){
    //overriding function to do two functions
    //decrement the counter for the cards
    cntr--; 
    
    //inheritance 
    discard(card); 
}

bool Hand::empty(){
    //if counter reaches 0 no more cards
    if(this->cntr==0){
        return true; 
    }
    else{
        return false; 
    }
}