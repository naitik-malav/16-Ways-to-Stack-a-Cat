#include "rep.h"
#include <iostream>
using namespace std;
class lstack : public rep {   //derived class of class "stack"
    
    public:
        list *head;
        lstack() {} //default constructor
        lstack(int max) {
            list *top = NULL;
            for(int i=0; i<max; i++) {
                if(head == NULL) {
                    list*temp = new list;
                    temp->data = -99;
                    temp->next = NULL;
                    top = temp;
                    head = top;
                }

                else {
                    list *temp = new list;
                    temp->next = NULL;
                    temp->data = -99;
                    top->next = temp;
                    top = top->next;
                }
            }
        }
        ~lstack() {}   //destructor

        void push(long long int data, int max) {
            list *top = head;
            head = top;
            while(top!= NULL)
                top = top->next;
            
            list *temp = new list;
            temp->data = data;
            temp->next = NULL;
            top = temp;
        };
        void pop(int) {
            list *top = head;
            head = top;

            while(top->next != NULL) {
                top = top->next;
            }
            free(top);
        };
        int size(int max) {
            list *top = head;
            int flag=0;

            while(top != NULL) {
                flag++;
                top = top->next;
            }
            return flag;
        };
        void print() {
            while(head->data != -99) {
                cout<<head->data<<"";
            }
        }
}; 