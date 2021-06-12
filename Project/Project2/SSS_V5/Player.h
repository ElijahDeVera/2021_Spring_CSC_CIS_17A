/* 
 * File:   Player.h
 * Author: Elijah De Vera
 * Date: 5/31/21
 * Player class specification
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std; 

#include "Deck.h"

class Player{
    private:
        int age; 
        string name; 
        static int plyrCnt; //total amount of players
        static int down; //running total of completed ranks after being discarded
        
    public:
        //Overloading
        Player(Deck &obj,string,int);
        Player(string);
        Player(int);
        Player(); 
        
        //Hand
        void setAge(int); 
        void setName(string); 
        void pHand();
        void p(int); 
        
        //Printing
        void pHand(Deck &obj); 
        
        //Discarding card from hand
        void discard(Deck &obj,int);
        
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
            name=p.name; 
            plyrCnt++; 
        }
};

#endif /* PLAYER_H */

