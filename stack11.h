class stack {
    int id;
    long long int *ptr;

    public:
        stack() {}    //default constructor 
        stack(int, int);
        ~stack() {}  //destructor
        void push(long long int, int);
        void pop(int);
        void print_stack(int);
};