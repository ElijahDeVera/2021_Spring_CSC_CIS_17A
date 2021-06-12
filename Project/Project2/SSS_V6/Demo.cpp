/*
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: 06/03/21
 * Purpose: Demo Specification 
 */

//User Libraries
#include <iostream>

#include "Demo.h"
#include "Deck.h"
#include "Player.h"

using namespace std; 

Demo::Demo(string name, int age, Deck &d, string dInp, string gInp){
    //retrieving user input
    dInput=dInp; 
    gInput=gInp; 
    
    //aggregation
    player.setName(name); 
    player.setAge(age);
    
    if(gInp=="Y"){
        //printing out demo information
        cout<<"Hello "<<player.getName()<<"("<<player.getAge()<<")"<<","<<endl;
        cout<<"This is the game of snip snap snorem"<<endl;
        cout<<"The cards will be distributed evenly amongst you and 3 computer players"<<endl; 
        cout<<"Each player must play a card if possible"<<endl; 
        cout<<"The first player may play any card"<<endl;
        cout<<"Whatever card is played calls for the other 3 cards of the same rank to be played next"<<endl;
        cout<<"The turn to play moves to the left. The player who plays the fourth card may then choose"<<endl;
        cout<<"any card in their hand for the next series."<<endl; 
        cout<<"If a player cannot play, they pass"<<endl; 
        cout<<"First player to get rid of all their cards wins the game"<<endl; 
        cout<<endl<<endl;
        cout<<"This is the deck you will be playing with"<<endl; 

        //aggregation
        d.display(); 
        cout<<endl<<endl<<"Before distribution the cards will be shuffled"<<endl;

        //aggregation
        d.shuffle();
        d.display();
    } 
}





