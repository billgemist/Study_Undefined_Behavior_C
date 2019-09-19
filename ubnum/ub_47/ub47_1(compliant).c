//undefined behavior number 47
#include <stdio.h>
#include <stddef.h>

int main(){
	
	int arr[5] = {1, 2 ,3 ,4, 5};

	int *ptr1, *ptr2;

	ptr1 = &arr[0]; // einai to 1o stoixeio toy pinaka kai einai o arithmos 1
	ptr2 = &arr[4]; // logika tha einai o arithmos 3 dld to 3o stoixeio tou pinaka afou 0,1,2

	ptrdiff_t pdiff;
	
	pdiff = ptr1 - ptr2;

	//printf("ptr1 = %d \n", *ptr1);
	//printf("ptr2 = %d \n", *ptr2);
	printf("pdiff = %ld \n", pdiff);

	return 0;
}
