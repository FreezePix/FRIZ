
#include <iostream>
#include "stack.h"
//this is my stack
int main() {

	elem *top( NULL );

	for ( int i = 0; i < 10; i++ ){
		push(i, &top);
	}

	output( top );
	std::cout << " ";

	for ( int i = 0; i < 10; i++ ){
		pop(&top);
	}
	
	output(top);
	return 0;
}