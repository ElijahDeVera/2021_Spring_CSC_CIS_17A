/*
 * File: hand.cpp
 * Author: Elijah De Vera
 * Date: 06/08/21
 * Purpose Hand Class implementation
 */

//User libraries
#include "Hand.h"
#include "Deck.h"

//System Libraries
#include <iostream>
#include <vector>
using namespace std;

//constructor
Hand::Hand(Deck &d, int num){
    //initialize number of cards
    n=num;
    
    //initialzing the cards in the hand
    for(int i=0;i<n;i++){
        this->hand.push_back(d.getCard(delt)); //increases due to static int
        delt++; 
    }
}

//deconstructor
Hand::~Hand(){
    delete []hand1;
}

//returning a specific card
Card Hand::getCrd(int card){
    return hand[card];
}

//returning the amount of cards in hand
int Hand::getCrds(){
    return hand.size(); 
}

//printing hand
void Hand::show(){
    //initializing the display page
    string message="Discarded"; //string that tells user if card is available
    string r; //rank
    char s;   //suit
    
    //creating the messages in a loop 
    for(int i=0;i<hand.size();i++){
        //ranks
        if(hand[i].rank()==1){ r="A"; }
        else if(hand[i].rank()==2){ r="2"; }
        else if(hand[i].rank()==3){ r="3"; }
        else if(hand[i].rank()==4){ r="4"; }
        else if(hand[i].rank()==5){ r="5"; }
        else if(hand[i].rank()==6){ r="6"; }
        else if(hand[i].rank()==7){ r="7"; }
        else if(hand[i].rank()==8){ r="8"; }
        else if(hand[i].rank()==9){ r="9"; }
        else if(hand[i].rank()==10){ r="10"; }
        else if(hand[i].rank()==11){ r="J"; }
        else if(hand[i].rank()==12){ r="Q"; }
        else if(hand[i].rank()==13){ r="K"; }
        
        //suits
        if(hand[i].suit()==0){ s='C'; }
        else if(hand[i].suit()==1){ s='S'; }
        else if(hand[i].suit()==2){ s='H'; }
        else if(hand[i].suit()==3){ s='D'; }
        
        //final result
        cout<<i+1<<") "<<r<<" "<<s<<endl; 
    }
}

//Definition of the static member variable outside of the class 
int Hand::delt=0;