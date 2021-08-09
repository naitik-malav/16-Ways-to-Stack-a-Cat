# Assignment-1

Name: Naitik Malav
Roll No: CS19BTECH11026

## Navigation-Commands, Compilation and running steps

1. First of all navigate to the folder where you have saved/downloaded my source codes.
2. Now type make command. It will open Makefile and compiles main.cpp and stack0.cpp together and it will save  generated binary final namely - stack0 into bin folder.
3. Now navigate to the bin folder using cd bin/ command.
4. Execute generated binary files. For eg enter ./stack0 to execute stack0
5. After that user is prompted to input according to the question and output will be displayed.
6. To execute other binary files do the same thing. Just enter ./stack1 ... 

## stack1.h
Here is the function prototypes which are used in array implementation of stack.
## stack1.cpp
Here is the description of required functions declared in header file.
In array implementation:
```
1. create_stack: creates stack of size n, because maximum possible size is n because only n operations are there. And initialized the elements to some negative number say -99 in starting.
2. push_stack: pushing the passed data at top of the stack
3. pop_stack: popping the stack from LIFO method.
4. print_stack: used to print stack from top to bottom or in LIFO style.
```
## main1.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack1.cpp. m pointers of type long long int are declared. Each of them stores the unique stack. Their index represents their id.


## stack2.h
Here is the linked list implementation of stack using struct. It's members are data and next pointer. data stores the passed data and next points to another node of the stack.
## stack2.cpp
```
1. create_stack: sets pointer to NULL.
2. createNode: creates particular node of a stack.
3. push_stack: pushing the passed data at top of the stack
4. pop_stack: popping the stack from LIFO method.
5. print_stack: used to print stack from top to bottom or in LIFO style.
```
## main2.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack2.cpp. m pointers are defined to struct stack. Each of them stores address of the stack which is implemented using linked list.


## stack3.h
Here is the linked list implementation of stack using class. It's members are data and next pointer. data stores the passed data and next points to another node of the stack. Both of them are declared as public so that they are accessible to outer functions.
## stack3.cpp
```
1. create_stack: sets pointer to NULL.
2. createNode: creates particular node of a stack.
3. push_stack: pushing the passed data at top of the stack
4. pop_stack: popping the stack from LIFO method.
5. print_stack: used to print stack from top to bottom or in LIFO style.
```
## main3.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack3.cpp. m pointers are defined to class stack. Each of them stores address of the stack which is implemented using linked list.


## stack4.h
Here struct stack_id has 2 members: i, and head pointer to struct list. i stores id and head pointer stores the address of stack implemented using linked list.
## stack4.cpp
```
1. create_stack: create node of type struct stack_id. sets i to id and head to NULL
2. createNode: creates particular node of a stack of type struct list.
3. push_stack: pushing the passed data at top of the stack
4. pop_stack: popping the stack from LIFO method.
5. print_stack: used to print stack from top to bottom or in LIFO style.
``` 
## main4.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack4.cpp. m pointers of type struct stack_id are declared. Each of them stores id and address of the stack. 


## stack5.h
Here I have defined class namely stack, with public struct id inside it. struct id has 2 variables- i and ptr. i stores the id and ptr stores the address of stack implemented using array. Few static functions are defined inside it.
## stack5.cpp
```
1. create: sets i to index and creates array of type long long int of size m and set ptr = &array[0] and return id*.
2. push: pushing the passed data at top of the stack
3. pop: popping the stack from LIFO method.
4. print_stack: used to print stack from top to bottom or in LIFO style.
``` 
## main5.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack0.cpp. m pointers of type struct id are declared.


## stack6.h
Here I have defined class namely stack, with public class id inside it, which is friend class of class stack. class id has 2 variables- i and ptr. i stores the id and ptr stores the address of stack implemented using array. Few static functions are defined inside it. At last virtual dummy function is also defined.
## stack6.cpp
```
1. create: sets i to index and creates array of type long long int of size m and set ptr = &array[0] and return id.
2. push: pushing the passed data at top of the stack
3. pop: popping the stack from LIFO method.
4. print_stack: used to print stack from top to bottom or in LIFO style.
``` 
## main6.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack0.cpp. m objects to class id are declared.


## stack7.h
Here I have defined class namely stack, with public class rep inside it, which is friend class of class stack. class id has 2 variables- i and ptr. i stores the id and ptr stores the address of stack implemented using array. typedef rep*id. Few static functions are defined inside it. At last virtual dummy function is also defined.
## stack7.cpp
```
destroy: destroys ID
Almost same as previous ones.
``` 
## main7.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack0.cpp. m objects to class id are declared. allocates memory of type rep is declared dynamically.

## stack8.h
Here I have defined class namely stack, with public class rep inside it, which is friend class of class stack. class id has 2 variables- i and ptr. i stores the id and ptr stores the address of stack implemented using array. constructor of class rep are defined. Also operator = is defined for rep objects. Few static functions are defined inside it. At last virtual dummy function is also defined.
## stack8.cpp
```
Almost same as previous ones. 
Only constructors are little modifications.
initialize: initializes the array elements to -99.
``` 
## main8.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack0.cpp. m objects to class rep are declared. 


## stack9_1.h
class stack is defined. It has typedef stack_rep *id. and few useful static functions. and private dummy functions at last.
## stack9_2.h
class rep is defined. It has i to store id and ptr to store address of stack implemented using array.
## stack9.cpp
```
Almost same as previous ones.
``` 
## main9.cpp
It prompts user for operations, etc. Here I have called create_stack, push_stack and pop_stack which I have defined in stack0.cpp. m pointer of type id are defined. 

## stack10.h
class stack has private i and ptr, and public typedef stack *id. few useful functions.
## stack11.h
class stack has private i and ptr, and public typedef stack *id. default constructors, user defined constructors and destructors. few useful functions.
## stack12.h
class stack has struct rep which has private i and ptr. rep *p. default constructors, user defined constructors and destructors. few useful functions.
## stack13.h
class stack has virtual functions defined inside it. class astack is derived from base class satck. it has id which stores id, and ptr which stores array address.
## stack14.h
class stack , class noop and class astack are defined in stack14.h

```
Note: For 10-14 main files and stack.cpp files are almost same with very few modifications of passing parameters according to "16 ways to stack a cat" paper.
```

I have implemented only 14 methods from given pdf. And half of the 15th one. Am unable to debug vtable error.
stack15.h, astack.h, lstack.h, aastack.h are under progress. Due to time constraint I could not debug it. Please consider my request. 
Thank you
Naitik malav
CS19BTECH11026
 
## Examples and few Screenshots
Here's the drive [link](https://drive.google.com/drive/folders/1e5kj4MbLRyUzz1imCyf5IHGhrmV8GaA2?usp=sharing) for screenshot. You can follow this link if you find any difficulty in above steps. Also it'll easily explain you all the steps. I have tested few inputs and program runs successfully.