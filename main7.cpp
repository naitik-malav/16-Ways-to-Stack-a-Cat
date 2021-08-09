#include <iostream>
#include "stack7.h"		//stack7.h is a header file
using namespace std;

int main(void) {
	int m, n;	//m=number of stacks and n=number of operation
	cin>> m>>n;

	stack::id stack_id[m] ;		
    for(int i=0; i<m; i++) {
        stack_id[i] = new stack::rep;
        stack_id[i] = stack::create(stack_id[i], i,  n);
    } 
        
	for(int i=0; i<n; i++) {
		int id;	//id: stack_id
		string operation;	//whether push or pop
		cin>> id>> operation;	

		if(operation == "push") {	//if it is push then we have to take input number otherwise no need
			long long int number; 	//number: to be popped into passed id
			cin>> number;
			stack_id[id-1] = stack::push(stack_id[id-1], number, n);	
		}

		else {
            stack::pop(stack_id[id-1], n);	//popping passed stack_id
        }
			
	}

	cout<< endl;
	for(int i=0; i<m; i++) {
		cout<< i+1<<" ";	//printing stack_id and its data. Printed stacks will be in ascending order of their stack_id's
		stack::print_stack(stack_id[i], n);	//calling print_stack function to print each stack
	}

    for(int i=0; i<m; i++)
        stack::destroy(stack_id[i]);
}