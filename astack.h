#include "lstack.h"
class astack : public rep {   //derived class of class "stack"
    int id;
    long long int *ptr;

    public:
        astack() {
        } //default constructor
        astack(int id, int max) {
            id = id;
            long long int *array = new long long int [max];
            for(int i=0; i<max; i++)
                array[i] = -99;
            ptr = &array[0];
        }
        //~astack() {}   //destructor
        virtual ~astack() {}

        long long int * get_ptr() {
            return ptr;
        }
        void push(long long iny, int);
        void pop(int max) {
            int flag;
            for(int i=0; i<max; i++) {
                if(*(ptr + i) == -99) {
                    flag = i;
                    break;
                }
            }
            if(flag>0)
		        *(ptr+flag-1) = -99;
            }
        int size(int max) {
            int flag=0;
            while(*(ptr+flag) != -99) {
                flag++;
            }
            return flag;
        }
        void print() {}
}; 