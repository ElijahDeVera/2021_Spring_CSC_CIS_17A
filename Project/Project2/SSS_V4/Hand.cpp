/* 
 * File: Hend.cpp
 * Author: Elijah De Vera
 * Date: 05/30/21
 * Purpose: Hand class specification
 */

#include "Hand.h"
#include "Card.h"
#include <iostream>
#include <iomanip>
using namespace std; 

Hand::Hand(int *c,int n){
    cards=c; 
    nCards=n; 
}

Hand::~Hand(){
    delete []cards; 
}

void Hand::display(){
    string r;
    char s; 
    for(int i=0;i<nCards;i++){
        Card card(cards[i],0); 
        //ranks
        if(card.rank()==1){ r="A"; }
        else if(card.rank()==2){ r="2"; }
        else if(card.rank()==3){ r="3"; }
        else if(card.rank()==4){ r="4"; }
        else if(card.rank()==5){ r="5"; }
        else if(card.rank()==6){ r="6"; }
        else if(card.rank()==7){ r="7"; }
        else if(card.rank()==8){ r="8"; }
        else if(card.rank()==9){ r="9"; }
        else if(card.rank()==10){ r="10"; }
        else if(card.rank()==11){ r="J"; }
        else if(card.rank()==12){ r="Q"; }
        else if(card.rank()==13){ r="K"; }
        //suits
        if(card.suit()==0){ s='C'; }
        else if(card.suit()==1){ s='S'; }
        else if(card.suit()==2){ s='H'; }
        else if(card.suit()==3){ s='D'; }
        
        cout<<setw(3)<<left<<cards[i]<<setw(3)<<left<<r<<setw(2)<<left<<s<<"\t"<<card.drawn()<<endl; 
    }
}
