//undefined behavior number 28
//idio me to ub28.c
#include <stdio.h>
//#include "ub28.h"
extern int abcdefghijkjlmnopqrstuvwxyz12345_6a;
extern int abcdefghijkjlmnopqrstuvwxyz12345_7b;
int main(){
	// in C99 translation limits section 5.2.4.1 
	//int sum = abcdefghijkjlmnopqrstuvwxyA + abcdefghijkjlmnopqrstuvwxyz;
	//int sum = abcd + abcD;

	printf("%d \n", abcdefghijkjlmnopqrstuvwxyz12345_6a); 
	printf("%d \n", abcdefghijkjlmnopqrstuvwxyz12345_7b); //printf will be removed...

	return 0;
}


