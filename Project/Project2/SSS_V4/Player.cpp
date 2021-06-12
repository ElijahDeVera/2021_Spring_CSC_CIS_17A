/* 
 * File:   Player.cpp
 * Author: Elijah De Vera
 * Date: 5/31/21
 * Purpose: Player class implementation
 */

//User Libraries
#include "Player.h"
using namespace std;

//Player constructors 
Player::Player(string s, int a){
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
    age=0; 
    plyrCnt++;
}

//setter functions
void Player::setHand(Hand *h){
    hand=h; 
}
void Player::setName(string n){
    name=n; 
}
void Player::setAge(int a){
    age=a; 
}

//Prints player's hands
void Player::pHand(){
    hand->display(); 
}

//Definition of the static member variable outside of the class 
int Player::plyrCnt=0; 