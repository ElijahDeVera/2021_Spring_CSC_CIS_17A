/* 
 * File: Deck.h
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Deck Class Specification
 */

#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck{
    private: 
        int nCards; 
        int max; 
        Card **card; 
        static int delt; 
        int inc; 

    public:
        //constructor
        Deck(int,int); //total cards
        ~Deck(); 
        
        //display and/or printing
        void shuffle(); 
        void display();
        void discard(int);
       
        //returning a card from a deck to compare
        Card getCard(int); 
        
        //copying elements from base to derived for hand and deck

};

#endif /* DECK_H */

