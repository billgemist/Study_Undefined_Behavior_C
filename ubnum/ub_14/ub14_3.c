//undefined behavior number 14
#include <stdio.h>

int foo(int a){
	int b = a^2;
	return b;
}


int main(){
	
	int var = 23;
	int c = foo(var);

	if(c > 10){
		long var = 1.0;
		printf("%ld\n", var);
	}

	printf("%d\n", var); //printf will be removed...

	return 0;
}
