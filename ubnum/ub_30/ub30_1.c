//undefined behavior number 30
#include <stdio.h>


int main(){
	char *p = "undefined behavior number 30";

	p[2] = 'L'; //invokes undefined behavior

	//printf("%s\n", *p);
	
	while(*p!='\0')
		printf("%c",*p++);

	printf("\n");

	return 0;
}

