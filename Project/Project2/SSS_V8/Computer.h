/* 
 * File:   Player.h
 * Author: Elijah De Vera
 * Date: 5/31/21
 * Player computer specification
 */

#ifndef COMPUTER_H
#define COMPUTER_H

//user libraries
#include "Hand.h"
#include "Player.h"

//inheritance
class Computer:public Player{
    private:
        string idNum;
        float version;
        
        //static variable
        static float cNum; //computer number/version
    public: 
        //constructors
        Computer(Hand &h):Player(h){
            idNum="00000";
            //increment static variable
            cNum+=.1; 
        }
        Computer(Hand &h, string n):Player(h,n){
            idNum="00000";
            cNum+=.1;
        }
        Computer(Hand &h,string n,string id):Player(h,n){
            idNum=id; 
            //increment static variable
            cNum+=.1; 
        }
        
        //base class to derived 
        void pHand();
        void setName(string); 
        
        //polymorphis
        virtual string getName(); 
        
        //return id num
        string getId();
        
        //return cNum 
        float getCNum(); 
        
        //operator overloading
        void operator+(Computer &); 
        void operator-(Computer &); 
};

#endif /* COMPUTER_H */