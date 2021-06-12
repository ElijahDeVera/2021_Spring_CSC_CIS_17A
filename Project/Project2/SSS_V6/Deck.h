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
        int delt; 
        int max; 
        Card **card; 

    public:
        Deck(int); //total cards
        ~Deck(); 
        void shuffle(); 
        void display();
        void discard(int);
        Card getCard(int); //retrieving a card from the deck
};

#endif /* DECK_H */

