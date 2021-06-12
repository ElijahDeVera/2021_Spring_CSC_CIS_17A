/* 
 * File: Deck.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose Deck Class Implementation
 */

#include <cstdlib>
#include <ctime>
#include <string>

#include "Deck.h"

using namespace std;

Deck::Deck(int n, int max){
    //set random number seed
    srand(static_cast<unsigned int>(time(0))); 
    //initializing properties of deck class
    delt=0;
    nCards=n; 
    card=new Card*[nCards];
    index=new int[nCards]; 
    for(int i=0;i<nCards;i++){
        card[i]=new Card(i,0); //new card not yet drawn 
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
        r=i+(rand()%(52-i));
        swap(index[i],index[r]);
    }
}

int *Deck::deal(int n){
    int pHand=n; 
    int *hand=new int[n]; 
    for(int i=0;i<pHand;i++){
        hand[i]=index[delt++]; 
    }
    return hand; 
}
