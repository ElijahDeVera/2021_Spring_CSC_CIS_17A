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

class Hand:public Deck{
    protected:
        int cntr; 
        
    public:
        //constructor (inheritance)
        Hand(Deck &d,int c, int inc):Deck(c,inc){
            cntr=c; 
            for(int i=0;i<c;i++){
                this->getCard(i)=d.getCard(i); 
            }
        }
        Hand(Deck &d,int counter,int c,int inc):Deck(c,inc){
            cntr=c; 
            for(int i=0;i<c;i++){
                this->getCard(i)=d.getCard(i); 
            }
        }
        
        //accesser function
        int getCntr(){
            return cntr;
        }
        
        //discarding function
        void dscard(int);
        
        //checks using counter if the player has any more cards
        bool empty(); 
        
        //if a deck is distributed evenly
        //copy constructor
        Hand(const Hand &h):Deck(h){}
};

#endif /* HAND_H */

