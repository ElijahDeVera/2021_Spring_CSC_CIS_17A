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
        Card(int); 
        int suit(); 
        int rank();
        int getD(){
            return d; 
        }
        bool drawn(); 
        void dscrd();
        void print(); 
        
        //operator overloading
        //copies a given card to the next card, aligns with the getCard in deck
        void operator=(const Card &top){
            c=top.c;
        }
};

#endif /* CARD_H */

