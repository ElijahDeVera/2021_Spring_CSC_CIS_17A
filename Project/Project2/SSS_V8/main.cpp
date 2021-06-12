/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: 06/03/21
 * Purpose: main function for program
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

//User libraries
#include "Deck.h"
#include "Hand.h"
#include "Card.h"
#include "Player.h"
#include "Computer.h"
#include "Person.h"
#include "Demo.h"

//template
template <class T>
T mx(T cards,T ppl ){
    //distributing cards evenly
    T max=cards/ppl; 
    
    //returning Template
    return max; 
}

//function prototypes
int gAge();
string gName(); 
void play(Person &,Computer &,int); 
int pCheck(); 
int cCheck(Person&,Card&);
char userInp();

//Execution begins here
int main(int argc, char** argv) {
    //card value
    const int CARDS=52; 
    
    //Prompting the user if they would like to play a game of Snip Snap Snorem
    char inp;
    try{
        inp=userInp();
    }
    catch(string a){
        cout<<a;
        //exit program
        exit(0); 
    }
    
    //declaring deck variables
    int players=2; 
    int amt;
    amt=mx(CARDS,players); 
    Deck deck(CARDS); 
    deck.shuffle(); 
    
    //initialzing hand variables
    Hand hand1(deck,amt);
    Hand hand2(deck,amt); 
    
    //creating computer player
    Computer p2(hand1,"hoku");
    
    //declaring player variables
    string name; 
    int age;
    
    //creating person 
    try{
        age=gAge();
        cin.ignore(); 
    }
    catch(string e){
        cout<<e; 
        //exit program due to exception
        exit(0); 
    }
    name=gName(); 
    Person p1(hand2,name); 
    
    //displaying the demo
    Demo demo(p1,deck,inp);
    
    //playing the game
    if(demo.getInp()=='Y'){  //if yes then the game will continue
        play(p1,p2,amt); 
    }
    
    //successful program
    return 0;
}

//functions
int pCheck(){
    //declaring
    int choice; 
    cout<<"Enter the card of your choice: ";
    cin>>choice;
    //returning
    return choice; 
}
int cCheck(Computer &p, Card &c){
    //goes through all the cards in hand and returns the index of the card of similar rank
    for(int i=0;i<p.getCrds();i++){
        if(p.getCard(i).rank()==c.rank()){
            return i+1; 
        }
    }
    //else returns an index of 0
    return 0; 
}
void play(Person &ply,Computer &com,int amt){
    //setting top card
    Card topcard(1); 
    topcard=ply.getCard(0);  
    cout<<endl<<"Current top card: ";
    topcard.print();
    ply.discard(1);
    
    //declaring/initializing game functions
    bool win=false; 
    int a=amt; 
    int cntr1=0; 
    int cntr2=0; 
    int crd; 
    
    //game functions
    int check1;
    int check2; 
    
    while(!win){
        //print out the players hand and asks to check 
        ply.pHand();
        check2=pCheck(); 
        
        //must have a proper index first
        if(check1!=0){
            if(ply.getCard(check2).rank()==topcard.rank()){
                ply.discard(check2);
                cntr1++; 
            }
        }
        
        //player win condition
        if(cntr1==amt){
            win=true;
            cout<<"Congratulations, You won!"<<endl; 
        }
        
        //checks if a whole suit of cards has been completed
        if(ply.getRem()==4){
            ply.setRem(); 
            cout<<"Enter card for top card: "<<endl;
            cin>>crd; 
            topcard=ply.getCard(crd); 
            cout<<"New Top Card: "; 
            topcard.print(); 
        }
        
        //prints out the computers hand and automatically checks for a number; 
        check1=cCheck(com,topcard); 
        if(check1!=0){
            if(com.getCard(check1).rank()==topcard.rank()){
                com.discard(check1); 
                cntr2++; 
            }
        }
        
        //computer win condition
        if(cntr2==amt){
            win=true; 
            cout<<"Wow a computer beat you"<<endl; 
        }
        
        //checks if a whole suit of cards has been completed
        if(ply.getRem()==4){
            ply.setRem(); 
            topcard=ply.getCard(1);
            cout<<"New Top Card";
            topcard.print(); 
        }
    }
}
string gName(){
    //declare/initialize
    string name;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    
    //return
    return name; 
}
char userInp(){
    char i; 
    cout<<"Would you like to play a game of snip snap snorem?"<<endl; 
    cout<<"Enter Y for yes, and N for no"<<endl; 
    cin>>i;
    
    if(i!='Y'){
        string no="Okay good bye!";
        throw no;
    }
    return i; 
}
int gAge(){
    //declaring and initializing cards
    int n; 
    cout<<"Enter your age: "<<endl; 
    cin>>n;
    
    //potential exceptions
    if(n<5){
        string except="ERROR: Must be 5 years or older in order to play. \n";
        throw except; 
    }
 
    //return
    return n; 
}