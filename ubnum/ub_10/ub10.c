//undefined behavior number 10
#include <stdio.h>


int main(){

	//register int num1;
	
	//register int num2 = num1;  //a value of an object with automatic storage duration is used while it is indeterminate

	register int num1;
	register int num2 = num1;

	printf("num1 = %d \n", num1);
	printf("num2 = %d \n", num2);
	printf("--------------------------\n");

	return 0;
}
