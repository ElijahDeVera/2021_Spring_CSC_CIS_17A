/* 
 * File: Card.h
 * Author: Elijah De Vera
 * Date: 05/29/21
 * Purpose: Card Class Specification for Version 1
 */

#ifndef CARD_H
#define CARD_H

class Card{
    private: 
        int c;  //card number
        bool d; //drawn 

    public: 
        Card(int,bool); 
        int suit(); 
        int rank();
        bool drawn(); 
        void print(int); 
};

#endif /* CARD_H */

