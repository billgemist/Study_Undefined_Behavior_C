//undefined behavior number 18
//https://www.lancaster.ac.uk/~simpsons/char/types/complete
#include <stdio.h>

struct grades{
	int math;
	int physics;
	int literature;
	struct grades gt; //incomplete type
};


int main(){
	
	struct grades grades1; // incomplete type

	int s = sizeof(grades1);

	printf("the size of struct grades is: %d\n", s); //printf will be removed...
    
	return 0;
}

