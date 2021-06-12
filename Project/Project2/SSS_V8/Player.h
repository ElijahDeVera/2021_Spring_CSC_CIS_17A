/* 
 * File:   Player.h
 * Author: Elijah De Vera
 * Date: 5/31/21
 * Player class specification
 */

#ifndef PLAYER_H
#define PLAYER_H

//system libraries
#include <string>
#include <vector>
using namespace std; 

//user libraries 
#include "Hand.h"
#include "Card.h"

//base class
const int CRDS_LFT=13; 

//constructor
class Player{
    protected:
        //all players must have a name
        string name; 
        
        //creating cards for each player; 
        vector<Card> cards; 
        
        //keeps track for number of ranks discarded
        static int removed; 
    public:
        //overloading
        Player(Hand &);
        
        //constructor
        Player(Hand &, string); 
        
        //printing hand
        void pHand(); 
        
        //getting name
        virtual string getName(); 
        
        //setting name
        void setName(string); 
        
        //Copy Constructor
        Player(const Player &p){
            name=p.name; 
        }
        
        //returning removed cards
        int getRem(); 
        
        //setting removed cards
        void setRem(); 
        
        //getting total cards amt
        int getCrds(); 
        
        //get how many cards have been discarded
        int nDscd();
        
        //discarding a card
        void discard(int); 
        
        //getting a specific card from hand
        Card getCard(int); 
        
        //copy constructor
        Player(Player &p){
            name=p.name; 
        }
};

#endif /* PLAYER_H */