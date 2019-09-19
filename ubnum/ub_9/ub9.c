//undefined behavior number 9 - similar to number 8
#include <stdio.h>
#include <stdlib.h>

int* fun(int varMain){

	int varFun = 0;
	varFun = varMain + 10;

	return &varFun;

}



int main(){

	int *ptr;

	ptr = fun(10);
	*ptr = *ptr + 1;

	printf("ptr = %d\n", *ptr); //will be removed
	
	return 0;
}

