/* 
 * File:   Hand.h
 * Author: Elijah De Vera
 * Date: 06/03/21
 * Purpose Hand class specification
 */

#ifndef HAND_H
#define HAND_H

//user libraries
#include "Deck.h"

//sysstem libraries
#include <vector>

class Hand{
    private:
        //amt of cards per hand 
        int n;
        
        //vector of cards for hand
        vector<Card> hand; 
        
        //static amt of cards
        static int delt; 
        
        //array of cards
        Card *hand1; 
    public:
        //constructor
        Hand(Deck &obj,int); 
        
        //deconstructor
        ~Hand(); 
        
        //printing hand
        void show(); 
        
        //getting a specific card from a deck
        Card getCrd(int); 
        
        //returning amt of cards
        int getCrds();
};

#endif /* HAND_H */