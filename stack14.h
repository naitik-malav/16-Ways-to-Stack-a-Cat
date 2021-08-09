class stack {
    public:
        virtual void push(long long int, int) = 0;
        virtual void pop(int) = 0;
        virtual void print_stack(int) = 0;
};

class noop {};

class astack : public stack {   //derived class of class "stack"

    int id;
    long long int *ptr;

    public:
        astack() {} //default constructor
        astack(int, int);
        astack(noop) {}
        ~astack() {}   //destructor

        void push(long long int, int);
        void pop(int);
        void print_stack(int);
}; 
