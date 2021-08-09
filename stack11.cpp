#include <iostream>
#include "stack11.h"
using namespace std;

stack::stack (int id, int max) {
    this->id = id;

    long long int *array = new long long int[max];
    for(int i=0; i<max; i++)
        array[i] = -99;
    
    this->ptr = &array[0];
}

void stack::push(long long int data, int max) {
    for(int i=0; i<max; i++) {
        if(*(ptr+i) == -99) {
            *(ptr+i)= data;
            break;
        }
    }
}

void stack::pop( int max) {
    int flag;
	for(int i=0; i<max; i++) {
		if(*(ptr + i) == -99) {
			flag = i;
			break;
		}
	}
	if(flag>0)
		*(ptr+flag-1) = -99;
}     

void stack::print_stack(int max) {	//printing in LIFO tech
    cout<< id<<" ";
	for(int i=max-1; i>=0; i--) {
		if(*(ptr+i) != -99)
		cout<< *(ptr+i)<< " ";
	}
	cout<<endl;
}