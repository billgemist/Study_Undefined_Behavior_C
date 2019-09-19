//undefined behavior number 20
#include <stdio.h>

void foo(int alpha, int beta){
	alpha = alpha*beta;
}



int main(){
	
	int gamma = (int)foo(2, 4);
    
	printf("gamma = %d \n", gamma); //printf will be removed...

	return 0;
}

