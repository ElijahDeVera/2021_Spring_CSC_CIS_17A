/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Project 2 Version 7 Snip Snap Snorem
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
#include "Hand.h"

//Function 
string nm();
int age(); 
string info(); 
void play(string,int,int,int); 

//template
template <class T>
T mx(T ppl, T cards){
    //distributing cards evenly
    T max=cards/ppl; 
    
    //returning Template
    return max; 
}

//Execution begins here
int main(int argc, char** argv) {
    //card value
    const int CARDS=52;
    
    //initializing hands
    int plyrs=4; 
    int amt=mx(plyrs,CARDS);

    //initializing user input
//    string inp;
//    inp=info(); 
    Card topCard(1); 
    topCard.print();
    cout<<topCard.rank(); 
    
    cout<<endl<<endl;
    
    Deck deck1(CARDS,CARDS);
    deck1.getCard(5)=topCard; 
    deck1.display();
    
    cout<<endl<<endl; 
    
    Hand hand1(deck1,amt,amt); 
    hand1.display(); 
    //initialzing user name and age
//    int yr=age();
//    cin.ignore(); 
//    string name=nm();  
    
    //initializing basic deck
    Deck deck(CARDS,0); 
    //demo
    //Demo demo(name,yr,deck,inp);
    
    //Playing the game
//    play(name,yr,plyrs,amt); 
    
    //Process inputs and output

    //deck.shuffle(); 
    
    //Reallocate memory
    
    //exit stage
    return 0;
}

//functions
//void play(string n, int a, int plyrs, int c){
//    //initialzing hands for players
//    Hand hk(c,c,c);
//    Hand hc(c,c,c*2);
//    Hand j(c,c,c*3);
//    Hand p(c,c,c*4);
// 
//    //initializing user name and age
//    Player player(p,n,a);
//    
//    //initializing players with hands
//    Player hoku(hk, "Hoku", 7); 
//    Player hachi(hc, "Hachi"); 
//    Player john(j);
//    
//    //showing user who other players are
//    cout<<hoku.getName()<<" "<<hoku.getAge()<<endl;
//    hoku.pHand(hk); 
//    
//    cout<<hachi.getName()<<" "<<hachi.getAge()<<endl;
//    hachi.pHand(hc); 
//    
//    cout<<john.getName()<<" "<<john.getAge()<<endl; 
//    john.pHand(j); 
//    
//    cout<<player.getName()<<" "<<player.getAge()<<endl;
//    player.pHand(p);
//}
int age(){
    //declare
    int n; 
    //prompt
    cout<<"How old are you?"<<endl; 
    //initialize
    cin>>n;
    //return
    return n; 
}
string nm(){
    //declare
    string name;
    //prompt
    cout<<"What is your name?: "<<endl;
    //initialize
    getline(cin,name);
    //return
    return name; 
}
string info(){
    //User input options
    string inp; 
    //prompt user for input options
    cout<<"Hello, this program runs a version of Snip Snap Snorem"<<endl;
    cout<<"Would you like to play?"<<endl; 
    cout<<"Type Y for yes and N for no"<<endl; 
    cin>>inp;
    cout<<endl; 
    //return user input
    return inp ;
}

