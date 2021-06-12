/* 
 * File: Card.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Card Class Implementation for Version 2
 */


//User Libraries
#include <iostream>
#include "Card.h"

using namespace std; 

Card::Card(int n){
    c=(n>0?n:0);
    d=0;            //all cards are available
}

int Card::suit(){
    int n=c; 
    n>=0?n%=52:0; 
    return n/13; 
    this->suit(); 
}

int Card::rank(){
    int n=c; 
    n++; 
    //ranks never pass 13
    if(n>13&&n<=13*2){
        n-=13; 
    }else if(n>13*2&&n<=13*3){
        n-=13*2; 
    }else if(n>13*3&&n<=13*4){
        n-=13*3; 
    }
    return n; 
    this->rank(); 
}

void Card::dscrd(){
    d++;
}

void Card::print(){
    //declaring variables
    string rank;
    char suit; 
    
    //fixing the rank
    if(this->rank()==1){ rank="A"; }
    else if(this->rank()==2){ rank="2"; }
    else if(this->rank()==3){ rank="3"; }
    else if(this->rank()==4){ rank="4"; }
    else if(this->rank()==5){ rank="5"; }
    else if(this->rank()==6){ rank="6"; }
    else if(this->rank()==7){ rank="7"; }
    else if(this->rank()==8){ rank="8"; }
    else if(this->rank()==9){ rank="9"; }
    else if(this->rank()==10){ rank="10"; }
    else if(this->rank()==11){ rank="J"; }
    else if(this->rank()==12){ rank="K"; }
    else if(this->rank()==13){ rank="Q"; }
    
    //fixing the 
    if(this->suit()==0){ suit='C'; }
    else if(this->suit()==1){ suit='S'; }
    else if(this->suit()==1){ suit='H'; }
    else if(this->suit()==1){ suit='D'; }
    
    //printing final product
    cout<<rank<<" "<<suit<<endl; 
}






