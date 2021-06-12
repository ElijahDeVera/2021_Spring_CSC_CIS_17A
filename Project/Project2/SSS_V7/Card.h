/* 
 * File: Card.h
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Card Class Specification for Version 1
 */

#ifndef CARD_H
#define CARD_H

class Card{
    private: 
        int c;  //card number
        int d; //drawn 

    public: 
        //constructor
        Card(int); 
        
        //accessor functions
        int suit(); 
        int rank();
        int getD(){
            return d; 
        }
        bool drawn(); 
        
        //discarding a card
        void dscrd();
        
        //printing a card
        void print(); 
        
        //operator overloading
        //copies a given card to the next card, aligns with the getCard in deck
        void operator=(const Card &top){
            c=top.c;
        }
};

#endif /* CARD_H */

