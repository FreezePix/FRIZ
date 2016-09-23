#include <iostream>
struct elem {

	int num;
	elem *prev;
};


void push( int num, elem **top );


int pop( elem **top );


void output( elem *top );

