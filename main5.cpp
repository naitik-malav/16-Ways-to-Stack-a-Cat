#include <iostream>
#include "stack5.h"		//stack.h is a header file
using namespace std;

int main(void) {
	int m, n;	//m=number of stacks and n=number of operation
	cin>> m>>n;

	stack::id *stack_id[m];		//each Stacks[i] represents stack_id = i
    for(int i=0; i<m; i++) {
		stack_id[i] = new stack::id;
        stack_id[i] = stack::create(stack_id[i], i,  n);
    } 
        
	for(int i=0; i<n; i++) {
		int id;	//id: stack_id
		string operation;	//whether push or pop
		cin>> id>> operation;	

		if(operation == "push") {	//if it is push then we have to take input number otherwise no need
			long long int number; 	//number: to be popped into passed id
			cin>> number;

			/*note that id=1 refers to stack_id[0] and id=2 refers to stack_id[1] 
			because here numbering starts from 0 to n-1*/
			stack_id[id-1] = stack::push(stack_id[id-1], number, n);	
		}

		else {	//it is pop
			stack::pop(stack_id[id-1], n);	//popping passed stack_id
		}
			
	}

	cout<< endl;
	for(int i=0; i<m; i++) {
		cout<< i+1<<" ";	//printing stack_id and its data. Printed stacks will be in ascending order of their stack_id's
		stack::print_stack(stack_id[i], n);	//calling print_stack function to print each stack
	}
}