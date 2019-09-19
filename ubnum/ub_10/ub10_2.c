//undefined behavior number 10
#include <stdio.h>

int main(){

	float num1;
	float num2;  //a value of an object with automatic storage duration is used while it is indeterminate

	int a = 1;

	while (a > 0){

		num2 = 10*num1;
		printf("num1 = %f \n", num1);
		printf("num2 = %f \n", num2);
		printf("a = %d \n", a);
		printf("--------------------------\n");

		a--;

	}


	return 0;
}
