//undefined behavior number 78
#include <stdio.h>
extern int k;
int main(){
	//extern int k;

	printf("k = %d\n", k);
    
	return 0;
}


//tcc ub78_1_1.c ub78_1_2.c -o t