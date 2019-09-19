//undefined behavior number 30
#include <stdio.h>


int main(){
	char *p = "undefined behavior number 30";

	p[2] = 'L'; //invokes undefined behavior
 
	
	return 0;
}

