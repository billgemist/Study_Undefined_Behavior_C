//undefined behavior number 33
//signed integer overflow
#include <stdio.h>
#include <limits.h>

void fun(int a){
	int b = INT_MAX + a;
	printf("fun: b+1 = %d\n", b); // will be removed if not necessary
	return;
}


int foo(int a){
	printf("foo: a+1 = %d\n", a+1); // will be removed if not necessary 
	return (a+1) > a; //false 0, True 1
}


int main(){
	
	fun(20);
    
	printf("return of foo() = %d\n", foo(INT_MAX)); // will be removed if not necessary


	return 0;
}
