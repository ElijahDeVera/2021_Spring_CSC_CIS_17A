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

#include "Hand.h"

class Player{
    private:
        int age; 
        string name; 
        Hand *hand; 
        static int plyrCnt; 
    public:
        //Overloading
        Player(string,int);
        Player(string);
        Player(int);
        //Hand
        void setAge(int); 
        void setName(string); 
        void setHand(Hand *);
        void pHand();
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
};

#endif /* PLAYER_H */

