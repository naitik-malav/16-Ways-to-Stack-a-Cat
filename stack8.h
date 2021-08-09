class stack {
    public:
        class rep {
            friend stack;
            int i;
            long long int *ptr;

            rep(int, long long int*);   //constructor
            rep(const rep&);        //copy constructor
            void operator = (const rep&);
        };
        static rep *create(int, int);
        static void push(rep&, long long int, int);
        static void pop(rep&, int);
        static void print_stack(rep&, int);
        static void destroy(rep *);
        static void initialize(rep&, int);
        static void cleanup(rep&, int);
    private:
        virtual int dummy() = 0;
};