//undefined behavior number 18
/*C99 => 6.2.5/19 
*The void type comprises an empty set of values; it is an incomplete type that cannot be
*completed
*/
#include <stdio.h>
int main(){
	
	int a = 10;
	void b; // incomplete type according to standard that cannot be completed. 

	int sa = sizeof(a);
	int sb = sizeof(b);

	printf("size of a = %d\n", sa); //printf will be removed...
   	printf("size of b = %d\n", sb); //printf will be removed...

	return 0;
	
	}


	