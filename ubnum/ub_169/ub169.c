//undefined behavior number 169
#include <stdio.h>
#include <stdlib.h> 

int main(){
	int * x = malloc(sizeof(int));
	
	*x = 9;
	
	free(x);
	free(x);

    
	return 0;
}
