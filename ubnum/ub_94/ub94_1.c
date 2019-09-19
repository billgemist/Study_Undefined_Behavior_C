//undefined behavior number 94
#include <stdio.h>
#include <string.h>

int main(){
	
	char array[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
	
	printf("before memcpy: %s\n", array); //printf will be removed


	memcpy( &array[1], &array[0], 9);
		
	printf("After memcpy: %s\n", array); //printf will be removed
	
	return 0;
	
	
	}


