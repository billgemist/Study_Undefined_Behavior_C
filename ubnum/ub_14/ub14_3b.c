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
		char var = 'j';
		printf("%c\n", var);
	}

	printf("%d\n", var); //printf will be removed...

	return 0;
}
