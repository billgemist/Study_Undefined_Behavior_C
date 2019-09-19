//undefined behavior number 61
/*in this example value of "val" will change through pointer
*without const type qualifier
like this example -> url: https://wiki.sei.cmu.edu/confluence/display/c/EXP40-C.+Do+not+modify+constant+objects
*/
#include <stdio.h>


int main(){
	const int val = 10;
	int *mptr;
	mptr = &val;

  *mptr = 123;
  
  /*printf("add of val %p\n", (void *)&val);	  
  printf("add mptr-> %p\n", (void *) mptr);
  printf("add of ptstr = %p\n", (void *) &mptr); //The argument shall be a pointer to void 
  printf("------------------\n");*/

  /*printf("int val = %d\n", val);*/

    
	return 0;
}
