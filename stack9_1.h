/* There are 2 methods to include class stack_rep here:

1. Include header files in the files where they are needed. So include "stack7_2.h" so that we can 
typedef id pointer of type stack_rep.

2.  If you were using a pointer or reference to stack_rep, then a forward declaration
would be sufficient, because the memory the compiler needs to reserve for a pointer or 
reference is independent of the class definition */

class stack_rep;

class stack {
    public:
        typedef stack_rep *id;
        static id create(id, int, int);
        static void push(id, long long int, int);
        static void pop(id, int);
        static void print_stack(id, int);
        static void destroy(id);
    
    private:
        virtual int dummy() = 0;
};