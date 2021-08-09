#include <iostream>
#include "stack8.h"
using namespace std;

stack::rep::rep(int index, long long int* pointer) {    //constructor
    i = index;
    ptr = pointer;
}

stack::rep::rep(const rep& obj) {       //copy constructor
    i = obj.i;
    ptr = obj.ptr;
}

void stack::initialize(rep &obj, int max) {
    for(int i=0; i<max; i++)
        *(obj.ptr+i) = -99;
}

stack::rep *stack::create(int id, int max){
    long long int *array = new long long int[max];
    rep *temp = new rep(id, &array[0]);
    initialize(*temp, max);
    return temp;
}

void stack::push(rep &obj, long long int data, int max) {
    for(int i=0; i<max; i++) {
        if(*(obj.ptr+i) == -99) {
            *(obj.ptr+i)= data;
            break;
        }
    }
}

void stack::pop(rep &obj, int max) {
    int flag;
	for(int i=0; i<max; i++) {
		if(*(obj.ptr + i) == -99) {
			flag = i;
			break;
		}
	}
	if(flag>0)
		*(obj.ptr+flag-1) = -99;
}     

void stack::print_stack(rep &obj, int max) {	//printing in LIFO tech
    cout<< obj.i<<" ";
	for(int i=max-1; i>=0; i--) {
		if(*(obj.ptr+i) != -99)
		cout<< *(obj.ptr+i)<< " ";
	}
	cout<<endl;
}

void stack::destroy(rep *temp){
    delete(temp);
}