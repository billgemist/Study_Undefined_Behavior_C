//undefined behavior number 33
//signed integer overflow
#include <stdio.h>
#include <limits.h>

int fun(int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
    
	printf("return of fun(20, 30): %d\n", fun(20, 30));
	printf("return of fun(20, INT_MAX): %d\n", fun(20, INT_MAX));


	return 0;
}
