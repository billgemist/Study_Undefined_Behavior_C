//undefined behavior number 22
/*example like https://wiki.sei.cmu.edu/confluence/display/c/EXP36-C.+Do+not+cast+pointers+into+more+strictly+aligned+pointer+types
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
  
void func(void) {
	char c = 'x';
	int *ip = (int *)&c; /* This can lose information */
	char *cp = (char *)ip;

	printf("cp = %c\n", *cp);

	/* Will fail on some conforming implementations */
	assert(cp == &c);
}

int main(){
	func();
    
	return 0;
}
