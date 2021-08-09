#include <iostream>
#include <string>
#include "stack7.h"
using namespace std;

stack::id stack::create(stack::id ID, int index, int max) {
	ID->i = index;
	long long int *array = new long long int[max];
	for(int i=0; i<max; i++)
		array[i] = -99;
	ID->ptr = &array[0];
	return ID;
}

void stack::destroy(stack::id ID) {
    delete(ID);
}

stack::id stack::push(stack::id ID, long long int data, int max) {
	for(int i=0; i<max; i++) {
		if(*(ID->ptr+i) == -99) {
			*(ID->ptr+i) = data;
			break;
		}	
	}
	return ID;
}

void stack::print_stack(stack::id ID, int max) {	//printing in LIFO tech
	for(int i=max-1; i>=0; i--) {
		if(*(ID->ptr+i) != -99)
		cout<< *(ID->ptr+i)<< " ";
	}
	cout<<endl;
}

void stack::pop(stack::id ID, int max) {		//function used to pop passed 
	int flag;
	for(int i=0; i<max; i++) {
		if(*(ID->ptr+i) == -99) {
			flag = i;
			break;
		}
	}
	if(flag>0)
		*(ID->ptr+flag-1) = -99;
}