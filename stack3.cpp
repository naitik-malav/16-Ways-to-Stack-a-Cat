#include <iostream>
#include "stack3.h"
using namespace std;

Stack *create_stack(Stack *temp){
	temp = NULL;
	return temp;
}

Stack *createNode(Stack *temp, int data) {	//creating node
	temp = new Stack;	//allocating memory
	temp->data = data;	//equating to data
	temp->next = NULL;	//pointing it to NULL
	return temp;	//returning back
}

Stack *push_stack(Stack *head, int data) {	//function used to pushed data into passed stack_id in LIFO manner
	if(head == NULL)
		head = createNode(head, data);

	else {
		/* by this below method temp is inserted at 1st position i.e. head i.e. in LIFO */ 
		Stack *temp = NULL;
		temp = createNode(temp, data);
		temp->next = head;
		head = temp;
	}
	return head;
}

Stack *pop_stack(Stack *head) {		//function used to pop passed 
	Stack *temp = head->next;
	delete(head);
	return temp;
}

void print_stack(Stack *head) {	//printing in LIFO tech
	while(head != NULL) {	//until it is not NULL
		cout<< head->data<< " "; 	
		head = head->next;	//moving it to it's next node
	}
	cout<<endl;
}
