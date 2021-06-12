/* 
 * File: Hand.h
 * Author: Elijah De Vera
 * Date: 05/30/21
 * Purpose: Hand class specification
 */

#ifndef HAND_H
#define HAND_H

class Hand{
    private:
        int *cards; 
        int nCards; 
    public: 
        Hand(int*,int); 
        ~Hand(); 
        void display(); 
};


#endif /* HAND_H */

