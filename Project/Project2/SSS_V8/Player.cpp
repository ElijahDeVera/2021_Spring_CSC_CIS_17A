/* 
 * File:   Player.cpp
 * Author: Elijah De Vera
 * Date: 5/31/21
 * Purpose: Player class implementation
 */

//system libraries
#include <iostream>
#include <vector>
using namespace std; 

//user libraries
#include "Hand.h"
#include "Player.h"

//overloading constructor
Player::Player(Hand &h){
    //overloading name
    name="John doe";
    
    //initializing all the cards for players
    for(int i=0;i<h.getCrds();i++){
        cards.push_back(h.getCrd(i)); 
    }
}

//getting removed cards
int Player::getRem(){
    return removed; 
}

//setting removed cards
void Player::setRem(){
    removed=0; 
}

//regular constructor
Player::Player(Hand &h, string n){
    name=n; 
    for(int i=0;i<h.getCrds();i++){
        cards.push_back(h.getCrd(i)); 
    }
}

//discarding a card
void Player::discard(int card){
    if(card>0){
        int index=card-1; 
        cards.erase(cards.begin()+index); 
    }
    else{
        cards.erase(cards.begin()); 
    }
    removed++; 
}

//getting a card
Card Player::getCard(int card){
    return cards[card-1]; 
}

//base class
int Player::nDscd(){
    int discard=0; 
    discard=CRDS_LFT-cards.size();
    return discard; 
}

//getting amt of cards
int Player::getCrds(){
    return cards.size(); 
}

//print hand
void Player::pHand(){
    //initializing the display page
    string message="Discarded"; //string that tells user if card is available
    string r; //rank
    char s;   //suit
    
    //creating the messages in a loop 
    for(int i=0;i<cards.size();i++){
        //ranks
        if(cards[i].rank()==1){ r="A"; }
        else if(cards[i].rank()==2){ r="2"; }
        else if(cards[i].rank()==3){ r="3"; }
        else if(cards[i].rank()==4){ r="4"; }
        else if(cards[i].rank()==5){ r="5"; }
        else if(cards[i].rank()==6){ r="6"; }
        else if(cards[i].rank()==7){ r="7"; }
        else if(cards[i].rank()==8){ r="8"; }
        else if(cards[i].rank()==9){ r="9"; }
        else if(cards[i].rank()==10){ r="10"; }
        else if(cards[i].rank()==11){ r="J"; }
        else if(cards[i].rank()==12){ r="Q"; }
        else if(cards[i].rank()==13){ r="K"; }
        
        //suits
        if(cards[i].suit()==0){ s='C'; }
        else if(cards[i].suit()==1){ s='S'; }
        else if(cards[i].suit()==2){ s='H'; }
        else if(cards[i].suit()==3){ s='D'; }
        
        //final result
        cout<<i+1<<") "<<r<<" "<<s<<endl; 
    } 
}

//getting name
string Player::getName(){
    string player="Player: "; 
    return player+name; 
}

//setting name
void Player::setName(string n){
    name=n; 
}

int Player::removed=0; 