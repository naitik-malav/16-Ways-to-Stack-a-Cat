class Stack{
    public:
        long long int data;     //number to be pushed into stack
        Stack* next;    //pointer to next node
}; 

Stack *push_stack (Stack *, int);       //pushed passed integer into passed stack_id
Stack *pop_stack (Stack *);     //popped passed stack_id
Stack *create_stack(Stack *);   //creates stack
void print_stack(Stack*);   //used to print stack




