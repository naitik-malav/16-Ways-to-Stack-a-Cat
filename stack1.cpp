#include <iostream>
#include "stack1.h"
using namespace std;

/* used to create stack */
long long int *create_stack(long long int *temp, int max){
	long long int *array = new long long int[max];	//creating array dynamically
	for(int i=0; i<max; i++)
		array[i] = -99;
	temp = &array[0];
    return temp;	//returning array
}

/*pushes passed data into stack */
long long int *push_stack(long long int array[], long long int data, int max) {
	for(int i=0; i< max; i++) {
		if(array[i] == -99) {
			array[i] = data;
			break;
		}	
	}
	return array;
}

long long int *pop_stack(long long int array[], int max) {		//function used to pop passed 
	for(int i=max-1; i>=0; i--) {
		if(array[i] !=-99 ) {
			array[i] = -99;
			break;
		}
	}
	return array;
}

void print_stack(long long int array[], int max) {	//printing in LIFO tech
	for(int i=max-1; i>=0; i--) {
		if(array[i] != -99)
		cout<< array[i]<< " ";
	}
	cout<<endl;
}
