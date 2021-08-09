#include <iostream>
#include "stack2.h"
using namespace std;

stack *create_stack(stack *temp){
	temp = NULL;
	return temp;
}

stack *createNode(stack *temp, int data) {	//creating node
	temp = new stack;	//allocating memory
	temp->data = data;	//equating to data
	temp->next = NULL;	//pointing it to NULL
	return temp;	//returning back
}

stack *push_stack(stack *head, int data) {	//function used to pushed data into passed stack_id in LIFO manner
	if(head == NULL)
		head = createNode(head, data);

	else {
		/* by this below method temp is inserted at 1st position i.e. head i.e. in LIFO */ 
		stack *temp = NULL;
		temp = createNode(temp, data);
		temp->next = head;
		head = temp;
	}
	return head;
}

stack *pop_stack(stack *head) {		//function used to pop passed 
	stack *temp = head->next;
	delete(head);
	return temp;
}

void print_stack(stack *head) {	//printing in LIFO tech
	while(head != NULL) {	//until it is not NULL
		cout<< head->data<< " "; 	
		head = head->next;	//moving it to it's next node
	}
	cout<<endl;
}
