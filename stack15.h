#include <iostream>
using namespace std;
#include "astack.h"
class stack {
    rep *p ;
    public:
    stack() {}
    stack(int, int);
    ~stack() {}

    rep *get_rep() { 
        return p;
    }

    

    void push(long long int data, int max) {
        p->push(data, max);
    }

    void pop(int max) {
        p->pop(max);
    }

    int size(int max) {
        return p->size(max);
    }   
};