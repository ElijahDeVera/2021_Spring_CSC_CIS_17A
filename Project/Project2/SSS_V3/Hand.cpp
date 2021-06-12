/* 
 * File: Hend.cpp
 * Author: Elijah De Vera
 * Date: 05/30/21
 * Purpose: Hand class specification
 */

#include "Hand.h"
#include "Card.h"
#include <iostream>
using namespace std; 

Hand::Hand(int *c,int n){
    cards=c; 
    nCards=n; 
}

Hand::~Hand(){
    delete []cards; 
}

void Hand::display(){
    for(int i=0;i<nCards;i++){
        Card card(cards[i],0); 
        cout<<cards[i]<<"\t"<<card.suit()<<"\t"<<card.rank()<<"\t"<<card.drawn()<<endl; 
    }
}
