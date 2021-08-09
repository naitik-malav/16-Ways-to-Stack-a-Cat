struct stack {
    long long int data;
    struct stack *next;
};

stack *push_stack (stack *, int);       //pushed passed integer into passed stack_id
stack *pop_stack (stack *);     //popped passed stack_id
stack *create_stack(stack *);   //creates stack
void print_stack(stack*);   //used to print stack




