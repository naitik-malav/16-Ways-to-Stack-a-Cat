class rep {
    public:
        virtual void push(long long int, int) = 0;
        virtual void pop(int) = 0;
        virtual int size(int) = 0;
        virtual void print() = 0;
        virtual ~rep () {}
};

struct list {
    long long int data;
    struct list *next;
};
