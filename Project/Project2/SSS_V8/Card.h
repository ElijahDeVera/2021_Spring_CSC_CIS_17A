/* 
 * File: Card.h
 * Author: Elijah De Vera
 * Date: 06/03/21
 * Purpose: Card class specification
 */

#ifndef CARD_H
#define CARD_H

//System Libraries
#include<string>
#include<iostream>
using namespace std; 

class Card{
    private:
        //number of card variable
        int c; 
        
    public:
        //constructor
        Card(int); 
        
        //returning the suit and rank
        int suit(); 
        int rank(); 
        
        //prints an individual card
        void print(); 
        
        //copies a given card to the next card, aligns with the getCard in deck
        void operator=(const Card &); 
};

#endif /* CARD_H */