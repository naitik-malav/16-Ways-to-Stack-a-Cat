#include <iostream>
#include "stack4.h"
using namespace std;

struct stack_id *create_stack(struct stack_id *temp, int index){
	temp = (struct stack_id*)malloc(sizeof(struct stack_id));
    temp->i = index+1;
    temp->head = NULL;
    return temp;
}

struct list *createNode(struct list *temp, int data) {	//creating node
	temp = new (struct list);	//allocating memory
	temp->data = data;	//equating to data
	temp->next = NULL;	//pointing it to NULL
	return temp;	//returning back
}

struct list *push_stack(struct list *head, int data) {	//function used to pushed data into passed stack_id in LIFO manner
	if(head == NULL)
		head = createNode(head, data);

	else {
		/* by this below method temp is inserted at 1st position i.e. head i.e. in LIFO */ 
		struct list *temp = NULL;
		temp = createNode(temp, data);
		temp->next = head;
		head = temp;
	}
	return head;
}

struct list *pop_stack(struct list *head) {		//function used to pop passed 
	struct list *temp = head->next;
	delete(head);
	return temp;
}

void print_stack(struct list *head) {	//printing in LIFO tech
	while(head != NULL) {	//until it is not NULL
		cout<< head->data<< " "; 	
		head = head->next;	//moving it to it's next node
	}
	cout<<endl;
}
