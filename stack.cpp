#include "stack.h"


void push( int num, elem **top ) {

	
	elem *curr = new elem;
	curr->num = num;


	*top == NULL ? curr->prev = NULL : curr->prev = *top;

	*top = curr;


}//end push



int pop( elem **top ) {

	
	int tmp = ( *top )->num;

	
	if ( *top == NULL ) {

		return -1;

	}


	elem *tmp_top = *top;

	*top = ( **top ).prev;


	delete tmp_top;

	return tmp;

}//end pop



void output( elem *top ) {


	while ( top != NULL ) {

		std::cout << top->num << " ";

		top = top->prev;

	}

}//end output
