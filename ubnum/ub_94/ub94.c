//undefined behavior number 94
#include <stdio.h>
#include <string.h>

int main(){
	
	/* test pending see: https://riptutorial.com/c/example/2150/copying-overlapping-memory */
	
	//char str[19] = "This is an example";
	char str[27] = "This is undefined behavior";

	printf("before memcpy: %s\n", str); //printf will be removed
 
	memcpy(str + 7, str, 10);

	 printf("After memcpy: %s\n", str); //printf will be removed
	
	
	return 0;
	
	
}


