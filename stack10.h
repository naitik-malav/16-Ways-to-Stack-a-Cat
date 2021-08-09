class stack {
    int i;
    long long int *ptr;

    public:
        typedef stack *id;
        static id create(id, int, int);
        static void destroy(id);
        
        static void initialize(id, int);
        static void cleanup(id, int);
        
        static void push(id, long long int, int);
        static void pop(id, int);
        static void print_stack(id, int);
};