//undefined behavior number 43
#include <stdio.h>

int main(){
	
	
	char ub[18] = "UndefinedBehavior";
	
	
	char *ptr1 = ub - 1;	// undefined behavior
	//char *ptr2 = ub + 17;	// pointing to the '\0' inside the array
	//char *ptr3 = ub + 18;	// pointing to just beyond
	char *ptr4 = ub + 19;	// undefined behavior
	//char *ptr5 = ub + 9;	// pointing to letter 'B' 

	/*
	*** Disclosure: The printf's will be removed in the test it is just for mine convinience!
	*/

	printf("(ub-1) = %s\n", ptr1);
    //printf("address p points = %p\n", (void *) ptr1);
	//printf("2 = %s\n", ptr2);
	//printf("3 = %s\n", ptr3);
	printf("(ub + 19) = %s\n", ptr4);
	//printf("5 = %c\n", *ptr5);
    
	return 0;
}
