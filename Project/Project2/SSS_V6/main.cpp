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
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Demo.h"

//Function 
int max(int,int); 
int remain(int,int,int); 
//Execution begins here
int main(int argc, char** argv) {
    //card value
    int cards=52;  
    
    Player hoku("Hoku");
    Player hachi("Hachi"); 
    //copy constructor with john "being" hoku
    Player john=hoku; 
    
    //Declaring variables
    Card topCard(1); //top card that will be utilized every game
    int nHand, //amount of cards per player
        amt;   //remaining cards that were not distributed
    
    //Initialize cards
    Deck deck(cards);
    
    //Initializing cards per player
    amt=max(hoku.getPlyrCnt(),cards);
    Deck deck1(amt); 
    
    //Initialize players 
    
    //Process inputs and outputs
    Demo demo("Elijah",19,deck,"Y","Y");

    //deck.shuffle(); 
    
    //Reallocate memory
    
    //exit stage
    return 0;
}

//functions
int max(int ppl,int crds){ 
    //distributing cards evenly for each player
    int m=crds/ppl;
    //returning function
    return m; 
}


