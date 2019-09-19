//undefined behavior number 33
//signed integer overflow
//example from John Ragher post of UB part 2
#include <stdio.h>
#include <limits.h>

int fun(int x){
	if(x<0) x = -x;
	/*if (x<0){
		printf("mesa stin if: x =  %d, (-x) = \n", x, (-x) );
		x = -x;
	}*/
	return x >= 0; /*1T, 0F */
}

int main(){

	printf("%d\n", -INT_MIN);
	printf("%d\n", fun(INT_MIN));


	return 0;
}

