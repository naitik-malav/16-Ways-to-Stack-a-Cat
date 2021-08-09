class stack {
    public:
        class rep {
            friend stack;
            private:
                int i;
                long long int *ptr;
        };
        typedef rep *id;
        static id create(id, int, int);
        static id push(id, long long int, int);
        static void pop(id, int);
        static void print_stack(id, int);
        static void destroy(id);
    private:
        virtual int dummy() = 0;
};