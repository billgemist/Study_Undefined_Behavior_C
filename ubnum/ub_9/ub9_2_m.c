//undefined behavior number 9 - similar to number 8
#include <stdio.h>
#include <stdlib.h>

int *gl_ptr;

void func2(){
	int a = 23;
	gl_ptr = &a;
}

void func1(){
	func2();
}

int main(){
	func1();
	printf("gl_ptr = %d\n", *gl_ptr); //will be removed
	return 0;
}


