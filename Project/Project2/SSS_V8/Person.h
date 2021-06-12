/* 
 * File:   Player.h
 * Author: Elijah De Vera
 * Date: 5/31/21
 * Player computer specification
 */

#ifndef PERSON_H
#define PERSON_H

//user libraries
#include "Hand.h"
#include "Player.h"

//inheritance
class Person:public Player{
    private:
        int age; 
        
    public: 
        //constructors
        Person(Hand &h):Player(h){
            age=5; 
        }
        Person(Hand &h,string n):Player(h,n){
            age=5; 
        }
        Person(Hand &h,string n,int a):Player(h,n){
            age=a; 
        }
            
        //base class to derived
        void pHand(); 
        
        //returning age
        int getAge(); 
        
        //setting age;
        void setAge(int); 
        
        //polymorphic
        virtual string getName();
};

#endif /* PERSON_H */