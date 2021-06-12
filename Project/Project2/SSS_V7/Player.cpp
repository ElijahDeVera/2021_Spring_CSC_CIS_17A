/* 
 * File:   Player.cpp
 * Author: Elijah De Vera
 * Date: 5/31/21
 * Purpose: Player class implementation
 */

//User Libraries
#include "Deck.h"
#include "Player.h"
using namespace std;

//Player constructors 
Player::Player(Hand &obj, string s, int a){
    name=s; 
    age=a; 
    plyrCnt++;
}
Player::Player(Hand &obj,int a){
    name="John Doe"; 
    age=a;
    plyrCnt++;
}
Player::Player(Hand &obj,string s){
    name=s; 
    age=99; 
    plyrCnt++;
}
Player::Player(Hand &obj){
    name="John Doe";
    age=99; 
    plyrCnt++; 
}

//setter functions
void Player::setName(string n){
    name=n; 
}
void Player::setAge(int a){
    age=a; 
}

//Prints player's hands
void Player::pHand(Hand &cards){
    cards.display();
}

//Discarding the cards
void Player::discard(Hand &cards,int n){
    cards.discard(n);
    down++; 
}

//Definition of the static member variable outside of the class 
int Player::plyrCnt=0; 
int Player::down=0; 