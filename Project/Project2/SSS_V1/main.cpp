/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Project 2 Version 2 Snip Snap Snorem
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//User Libraries
#include "Card.h"

//Function 
void shuffle(int*,int);

//Execution begins here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Card **deck; 
    int crds=52; 
    int cntr=0; 
    int plyrs,max; 
            
    //Initialize
    int *indx=new int[crds];
    deck=new Card*[crds]; 
    for(int i=0;i<crds;i++){
        deck[i]=new Card(i); 
        indx[i]=i; 
    }
    
    //Process inputs and outputs
    shuffle(indx,crds); 
    for(int i=0;i<crds;i++){
        cout<<indx[i]<<"\t"<<deck[indx[i]]->suit()<<"\t"<<deck[indx[i]]->rank()<<endl; 
    }

    //Reallocate memory
    for(int i=0;i<crds;i++){
        delete deck[i]; 
    } 
    delete []indx; 
    delete []deck; 
    
    //exit stage
    return 0;
}

//Functions
void shuffle(int *a,int n){
    int r;
    for(int i=0;i<n;i++){
        r=i+(rand()%(52-i));
        swap(a[i],a[r]);
    }
}



