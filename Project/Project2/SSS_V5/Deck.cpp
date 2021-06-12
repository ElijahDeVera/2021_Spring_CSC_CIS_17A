/* 
 * File: Deck.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose Deck Class Implementation
 */

#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
#include "Deck.h"
#include "Card.h"
using namespace std;

Deck::Deck(int n){
    //set random number seed
    srand(static_cast<unsigned int>(time(0))); 
    //initializing properties of deck class
    delt=0;
    nCards=n; 
    card=new Card*[nCards];
    index=new int[nCards]; 
    for(int i=0;i<nCards;i++){
        card[i]=new Card(i);  
        index[i]=i; 
    }
}

Deck::~Deck(){
    for(int i=0;i<nCards;i++){
        delete card[i]; 
    }
    delete []card; 
    delete []index; 
}

void Deck::shuffle(){
    int r;
    for(int i=0;i<nCards;i++){
        r=i+(rand()%(nCards-i));
        swap(card[i],card[r]);
    }
}

////testing discard 
void Deck::discard(int c){
    card[c]->dscrd(); 
}

//retrieving a card
Card Deck::getCard(int c){
    return *card[c]; 
}

void Deck::display(){
    string message="Discarded"; //string that tells user if card is available
    string r; //rank
    char s;   //suit
    for(int i=0;i<nCards;i++){
        //ranks
        if(card[i]->rank()==1){ r="A"; }
        else if(card[i]->rank()==2){ r="2"; }
        else if(card[i]->rank()==3){ r="3"; }
        else if(card[i]->rank()==4){ r="4"; }
        else if(card[i]->rank()==5){ r="5"; }
        else if(card[i]->rank()==6){ r="6"; }
        else if(card[i]->rank()==7){ r="7"; }
        else if(card[i]->rank()==8){ r="8"; }
        else if(card[i]->rank()==9){ r="9"; }
        else if(card[i]->rank()==10){ r="10"; }
        else if(card[i]->rank()==11){ r="J"; }
        else if(card[i]->rank()==12){ r="Q"; }
        else if(card[i]->rank()==13){ r="K"; }
        
        //suits
        if(card[i]->suit()==0){ s='C'; }
        else if(card[i]->suit()==1){ s='S'; }
        else if(card[i]->suit()==2){ s='H'; }
        else if(card[i]->suit()==3){ s='D'; }
        
        //prints out card if not drawn, if drawn displays message; 
        if(card[i]->getD()>0){ 
            cout<<message<<endl;
        }
        else{ 
            cout<<i<<" "<<r<<" "<<s<<" "<<card[i]->getD()<<endl; 
        }
    }
}
