//undefined behavior number 61
/*in this example the value of "val" changed by pointer f through pointer mptr(which is const).
*ub61_2.c will change the value of "val" via pointer without const directly
*/
#include <stdio.h>
/*
Function func() is passed a const pointer to int and then the 
const is casted away, and then the content of the ptr is 
modified 
*/
void func(const int *ptr){
	int *f = (int *)ptr;
  *f = 123;
  	  
  /*printf("add f-> %p\n", (void *) f);
  printf("------------------\n");*/
}

int main(){
	const int val = 10;
	const int *mptr;
	mptr = &val;

  /*printf("add of val %p\n", (void *)&val);	  
  printf("add mptr-> %p\n", (void *) mptr);
  printf("add of ptstr = %p\n", (void *) &mptr); //The argument shall be a pointer to void 
  printf("------------------\n");*/

	func(mptr);

  /*printf("int val = %d\n", val);*/

    
	return 0;
}
