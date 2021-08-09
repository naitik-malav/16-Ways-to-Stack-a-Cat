#include <iostream>
#include "stack3.h"		//stack.h is a header file
using namespace std;

int main(void) {
	int m, n;	//m=number of stacks and n=number of operation
	cin>> m>>n;

	Stack *stack_id[m];		//each Stacks[i] represents stack_id = i
	for(int i=0; i<m; i++)
		stack_id[i] = create_stack(stack_id[i]);		//setting it to NULL for no errors and bugs(in case)

	for(int i=0; i<n; i++) {
		int ID;	//ID: stack_id
		string operation;	//whether push or pop
		cin>> ID>> operation;	

		if(operation == "push") {	//if it is push then we have to take input number otherwise no need
			int number; 	//number: to be popped into passed stack_id
			cin>> number;

			/*note that ID=1 means stack_id[0] and ID=2 means stack_id[1] 
			because here numbering starts from 0 to n-1*/
			stack_id[ID-1] = push_stack(stack_id[ID-1], number);	
		}

		else {	//it is pop
			if(stack_id[ID-1] == NULL)	//prompting user in case of empty stack
				cout<< "You can't popped empty stack"<< endl;
			else
				stack_id[ID-1] = pop_stack(stack_id[ID-1]);	//popping passed stack_id
		}
			
	}

	cout<< endl;
	for(int i=0; i<m; i++) {
		cout<< i+1<<" ";	//printing stack_id and its data. Printed stacks will be in ascending order of their stack_id's
		print_stack(stack_id[i]);	//calling print_stack function to print each stack
	}
}