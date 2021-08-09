#include <iostream>
#include "stack15.h"
using namespace std;

lstack *convert_from_a_to_l(stack &s, int max) {
    astack *ap;
    long long int *temp1 = ap->get_ptr();
    
    lstack lp(s.size(max));
    lstack *lp2 = &lp;
    for(int i=0; i<max; i++) {
        lp.head->data = *(temp1+i);
        lp.head = lp.head->next;
    }
    return lp2;
}

int main(void) {
	int m, n;	//m=number of stacks and n=number of operation
	cin>> m>>n;

	stack *stack_id = new stack[m];		
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
    /*
    cout<< endl;
	for(int i=0; i<m; i++) {
		stack_id[i].print_stack(n);	//calling print_stack function to print each stack
	}
    */
    /*
    cout<<"hello";
    lstack *pointer[m];
    for(int i=0; i<m; i++) {
        pointer[i] = convert_from_a_to_l(stack_id[i], n);
    }

	cout<< endl;
	for(int i=0; i<m; i++) {
        cout<<i+1<<" ";
        pointer[i]->print();
    }
    */
		
}