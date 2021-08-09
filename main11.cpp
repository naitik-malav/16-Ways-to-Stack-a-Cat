#include <iostream>
#include "stack11.h"		//stack11.h is a header file
using namespace std;

int main(void) {
	int m, n;	//m=number of stacks and n=number of operation
	cin>> m>>n;

	stack *stack_id = new stack[m] ;		
    for(int i=0; i<m; i++) {
        stack_id[i] = stack(i+1, n);
    }

	for(int i=0; i<n; i++) {
		int id;	//id: stack_id
		string operation;	//whether push or pop
		cin>> id>> operation;	

		if(operation == "push") {	//if it is push then we have to take input number otherwise no need
			long long int number; 	//number: to be popped into passed id
			cin>> number;
			stack_id[id-1].push(number, n);	
		}

		else {
            stack_id[id-1].pop(n);	//popping passed stack_id
	    }
    }

	cout<< endl;
	for(int i=0; i<m; i++)
		stack_id[i].print_stack(n);	//calling print_stack function to print each stack
}