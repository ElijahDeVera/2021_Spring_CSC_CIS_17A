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
using namespace std; 

//user libraries
#include "Deck.h"
#include "Hand.h"

class Player{
    private:
        int age; 
        string name; 
        static int plyrCnt; //total amount of players
        static int down; //running total of completed ranks after being discarded
        
    public:
        //Overloading
        Player(Hand&,string,int);
        Player(Hand&,int);
        Player(Hand&,string);
        Player(Hand&); 
        
        //Hand
        void setAge(int); 
        void setName(string); 
        void pHand();
        void p(int); 
        
        //Printing
        void pHand(Hand &obj); 
        
        //Discarding card from hand
        void discard(Hand &obj,int);
        
        //getter functions
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        int getPlyrCnt(){
            return plyrCnt; 
        }
        int getDown(){
            return down; 
        }
        
        //Copy Constructor
        Player(const Player &p){

            age=p.age; 
            plyrCnt++; 
        }
};

#endif /* PLAYER_H */

