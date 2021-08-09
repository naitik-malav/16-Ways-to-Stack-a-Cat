struct stack_id {
    int i;
    struct list *head;
};

struct list {
    long long int data;
    struct list *next;
};

struct stack_id *create_stack(struct stack_id *, int);
struct list *push_stack(struct list *, int);
struct list *pop_stack(struct list *head);
void print_stack(struct list *head);