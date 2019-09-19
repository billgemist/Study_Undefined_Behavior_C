//undefined behavior number 10
#include <stdio.h>

int main(){

	auto int num1;
	auto int num2;  //a value of an object with automatic storage duration is used while it is indeterminate

	int a = 1;

	while (a > 0){

		num2 = num1;
		printf("num1 = %d \n", num1);
		printf("num2 = %d \n", num2);
		printf("a = %d \n", a);
		printf("--------------------------\n");
		
		a--;

	}


	return 0;
}
