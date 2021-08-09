#include <iostream>
#include "stack9_1.h"		//stack9_1.h is a header file
#include "stack9_2.h"		//stack9_2.h is a header file
using namespace std;

stack::id stack::create(id temp, int id, int max) {
    long long int *array = new long long int[max];
    for(int i=0; i<max; i++) 
        array[i] = -99;
    temp->i = id;
    temp->ptr = &array[0];
    return temp;
}

void stack::push(id temp, long long int data, int max) {
    for(int i=0; i<max; i++) {
        if(*(temp->ptr+i) == -99) {
            *(temp->ptr+i)= data;
            break;
        }
    }
}

void stack::pop(id temp, int max) {
    int flag;
	for(int i=0; i<max; i++) {
		if(*(temp->ptr + i) == -99) {
			flag = i;
			break;
		}
	}
	if(flag>0)
		*(temp->ptr+flag-1) = -99;
}     

void stack::print_stack(id temp, int max) {	//printing in LIFO tech
    cout<< temp->i<<" ";
	for(int i=max-1; i>=0; i--) {
		if(*(temp->ptr+i) != -99)
		cout<< *(temp->ptr+i)<< " ";
	}
	cout<<endl;
}

void stack::destroy(id temp){
    delete(temp);
}