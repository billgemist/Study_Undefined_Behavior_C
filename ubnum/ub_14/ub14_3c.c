//undefined behavior number 14
/*same as ub14_3b.c but with out the if statement when 
changing the int var to char var.*/
#include <stdio.h>

int foo(int a){
	int b = a^2;
	return b;
}


int main(){
	
	int var = 23;
	int c = foo(var);
	
	char var = 'j';
	printf("%c\n", var);

	printf("%d\n", var); //printf will be removed...

	return 0;
}
