/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Project 2 Version 2 Snip Snap Snorem
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//User Libraries
#include "Deck.h"

//Function 
int max(int, int); 

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int cards=52; 
    int plyrs;
    cout<<"How many players?"<<endl; 
    cin>>plyrs; 
    int nHand=max(plyrs,cards); 
    Deck deck(cards,nHand); 
            
    //Initialize
    int *hand; 
    
    //Process inputs and outputs
    //deck.shuffle(); 
    
    //Display Results
    for(int i=0;i<plyrs;i++){
        hand=deck.deal(nHand); 
        cout<<"Hand "<<i<<"'s cards"<<endl; 
        for(int j=0;j<nHand;j++){
            Card card(hand[j],0);
            cout<<hand[j]<<"\t"<<card.suit()<<"\t"<<card.rank()<<endl; 
        }
        delete []hand; 
    }
    
    //Reallocate memory
    
    //exit stage
    return 0;
}

//functions
int max(int ppl, int crds){ 
    //distributing cards evenly for each player
    int m=crds; 
    return m/ppl; 
}


