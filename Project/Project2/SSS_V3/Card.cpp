/* 
 * File: Card.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Card Class Implementation for Version 2
 */

#include "Card.h"

Card::Card(int n,bool o){
    c=(n>0?n:0);
    d=o; 
}

int Card::suit(){
    int n=c; 
    n>=0?n%=52:0; 
    return n/13; 
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
}

bool Card::drawn(){
    bool drwn; 
    drwn=d; 
    //checks if card is drawn
    if(d==0){
        drwn=false; 
    }else{
        drwn=true; 
    }
    return drwn; 
}




