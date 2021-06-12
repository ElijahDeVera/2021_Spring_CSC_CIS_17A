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
#include "Player.h"

//Function 
int max(int,int); 
int remain(int,int,int); 
//Execution begins here
int main(int argc, char** argv) {
    //card value
    int cards=52; 
    //player initialization
    int plyrs=2; 
    Player hachi("Hachi",7);
    Player hoku("Hoku"); 
    
    //card, deck initialization
    int nHand=max(plyrs,cards);  //distributed cards
    Deck deck(cards); 
    int amt=remain(plyrs,nHand,cards); //discarded pile
    Deck discard(cards); 
    
    //Initialize
    
    //Process inputs and outputs
    //deck.shuffle(); 
    
    //Display Results
    deck.shuffle(); 
    cout<<hachi.getPlyrCnt()<<endl; 
    Hand hand1(deck.deal(nHand),nHand);
    hachi.setHand(&hand1); 
    cout<<hachi.getName()<<"'s hand"<<endl; 
    cout<<hachi.getAge()<<endl; 
    
    hachi.pHand();
    Hand hand2(deck.deal(nHand),nHand); 
    hoku.setHand(&hand2); 
    cout<<hoku.getName()<<"'s hand"<<endl; 
    cout<<hoku.getAge()<<endl; 
    hoku.pHand();
    
    //Discarded Pile 
    cout<<endl<<"Discarded pile"<<endl; 
    for(int i=cards-amt;i<cards;i++){
        Hand nDisc(deck.deal(amt),amt); 
        nDisc.display(); 
    }
    
    //Reallocate memory
    
    //exit stage
    return 0;
}

//functions
int remain(int p,int mx,int crds){
    return crds-(mx*p); 
}
int max(int ppl,int crds){ 
    //distributing cards evenly for each player
    int m=crds; 
    return m/ppl; 
}


