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
        int *index; 
    public:
        Deck(int x); //total cards
        ~Deck(); 
        void shuffle(); 
        int *deal(int); 
};

#endif /* DECK_H */

