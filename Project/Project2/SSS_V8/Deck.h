/* 
 * File: Deck.h
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Deck Class Specification
 */

#ifndef DECK_H
#define DECK_H

//User libraries
#include <vector>
#include <random>

//System libraries
#include "Card.h"

class Deck{
    private:
        //vector of cards
        vector<Card> deck; 
        
        //amount of cards
        int cards; 
    public: 
        //constructor
        Deck(int); 
        
        //displaying the deck
        void display(); 
        
        //shuffling the cards
        void shuffle(); 
        
        //getting a specific card
        Card getCard(int);
        
        //operator overloading
        Deck operator+(Deck &);
        Deck operator-(Deck &); 
};

#endif /* DECK_H */