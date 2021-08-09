#include <iostream>
#include <string>
#include "stack5.h"
using namespace std;

stack::id *stack::create(stack::id *temp, int index, int max) {
	temp->i = index;
	long long int *array = new long long int[max];
	for(int i=0; i<max; i++)
		array[i] = -99;
	temp->ptr = &array[0];
	return temp;
}

stack::id *stack::push(stack::id *temp, long long int data, int max) {
	for(int i=0; i< max; i++) {
		if(*(temp->ptr+i) == -99) {
			*(temp->ptr+i) = data;
			break;
		}	
	}
	return temp;
}

void stack::print_stack(stack::id *temp, int max) {	//printing in LIFO tech
	for(int i=max-1; i>=0; i--) {
		if(*(temp->ptr+i) != -99)
		cout<< *(temp->ptr+i)<< " ";
	}
	cout<<endl;
}

void stack::pop(stack::id *temp, int max) {		//function used to pop passed 
	int flag;
	for(int i=0; i<max; i++) {
		if(*(temp->ptr+i) == -99) {
			flag = i;
			break;
		}
	}
	if(flag>0)
		*(temp->ptr+flag-1) = -99;
}