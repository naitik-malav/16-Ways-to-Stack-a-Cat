#include "stack15.h"
class astack;
stack::stack(int id, int max) {
        astack *obj = new astack[1];
        obj[0] = astack(id, max);
        this->p = &obj[0];
    }

void astack::push(long long int data, int max) {
            for(int i=0; i<max; i++) {
                if(*(ptr+i) == -99) {
                    *(ptr+i)= data;
                    break;
                }
            }
        }