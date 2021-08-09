#include <iostream>
#include "stack10.h"		//stack10.h is a header file
using namespace std;

int main(void) {
	int m, n;	//m=number of stacks and n=number of operation
	cin>> m>>n;

	stack *stack_id[m] ;	
    for(int i=0; i<m; i++) {
        stack_id[i] = stack::create(stack_id[i], i+1, n);	//creating stack
        stack::initialize(stack_id[i], n);	//initializing stack elements to a NULL value or u can say a const value=-99
    }

	for(int i=0; i<n; i++) {
		int id;	//id: stack_id
		string operation;	//whether push or pop
		cin>> id>> operation;	

		if(operation == "push") {	//if it is push then we have to take input number otherwise no need
			long long int number; 	//number: to be popped into passed id
			cin>> number;
			stack::push(stack_id[id-1], number, n);	
		}

		else {
            stack::pop(stack_id[id-1], n);	//popping passed stack_id
	    }
    }

	cout<< endl;
	for(int i=0; i<m; i++)
		stack::print_stack(stack_id[i], n);	//calling print_stack function to print each stack

    for(int i=0; i<m; i++)
        stack::destroy(stack_id[i]);
}