#include<iostream>
#pragma once 
using namespace std;
#define NILL (cSchachfeld *)0

class cSchachfeld{
    private:
        char x;
        int y;
        cSchachfeld* prev;
    public:
        cSchachfeld(char x_in, int y_in, cSchachfeld*);
        friend bool Vergleich(cSchachfeld*,cSchachfeld*);
        ~cSchachfeld();
        cSchachfeld* Springerzug();
        void printList();    
};