/* 
 * File: Deck.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose Deck Class Implementation
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
#include <vector>
using namespace std; 

//User libraries
#include "Deck.h"

//constructor
Deck::Deck(int crds){
    cards=crds; 
    
    //creating the vector fo cards
    for(int i=0;i<crds;i++){
        Card c(i); 
        this->deck.push_back(c); 
    }
}

Card Deck::getCard(int card){
    return deck[card]; 
}

void Deck::shuffle(){
    //setting random number 
    srand(static_cast<unsigned int>(time(0))); 
    int r;
    
    //swapping the card positions
    for(int i=0;i<cards;i++){
        r=i+(rand()%(cards-i));
        swap(deck[i],deck[r]);
    }
}

void Deck::display(){
    //initializing the display page
    string message="Discarded"; //string that tells user if card is available
    string r; //rank
    char s;   //suit
    
    //creating the messages in a loop 
    for(int i=0;i<cards;i++){
        //ranks
        if(deck[i].rank()==1){ r="A"; }
        else if(deck[i].rank()==2){ r="2"; }
        else if(deck[i].rank()==3){ r="3"; }
        else if(deck[i].rank()==4){ r="4"; }
        else if(deck[i].rank()==5){ r="5"; }
        else if(deck[i].rank()==6){ r="6"; }
        else if(deck[i].rank()==7){ r="7"; }
        else if(deck[i].rank()==8){ r="8"; }
        else if(deck[i].rank()==9){ r="9"; }
        else if(deck[i].rank()==10){ r="10"; }
        else if(deck[i].rank()==11){ r="J"; }
        else if(deck[i].rank()==12){ r="Q"; }
        else if(deck[i].rank()==13){ r="K"; }
        
        //suits
        if(deck[i].suit()==0){ s='C'; }
        else if(deck[i].suit()==1){ s='S'; }
        else if(deck[i].suit()==2){ s='H'; }
        else if(deck[i].suit()==3){ s='D'; }
        
        //final result
        cout<<i+1<<") "<<r<<" "<<s<<endl; 
    }
}