//undefined behavior number 19
#include <stdio.h>

int main(){

	register int arr[4] = {90,91,92,93};
	(int *)arr = arr;

	printf("parr = %d \n", *arr); //printf will be removed...

	return 0;
}
