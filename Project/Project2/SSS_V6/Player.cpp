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
Player::Player(Deck &obj, string s, int a){
    name=s; 
    age=a; 
    plyrCnt++;
}
Player::Player(int a){
    name="John Doe"; 
    age=a;
    plyrCnt++;
}
Player::Player(string s){
    name=s; 
    age=99; 
    plyrCnt++;
}
Player::Player(){
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
void Player::pHand(Deck &cards){
    cards.display();
    down++; 
}

//Discarding the cards
void Player::discard(Deck &cards,int n){
    cards.discard(n);
}

//Definition of the static member variable outside of the class 
int Player::plyrCnt=0; 
int Player::down=0; 