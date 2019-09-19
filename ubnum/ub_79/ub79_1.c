//undefined behavior number 79
//same as 79 but now func2 returns the gamma
#include <stdio.h>

int func1 ( var, nar )
int var;
int *nar;
{
	return var;
}

int func2 ( alpha, beta, gamma )
int alpha;
int beta;
{
	return gamma;
}


int main(){

	int *ptr = 0;
	printf("%d\n", func1(10, ptr));
    
	printf("%d\n", func2(2333, 20));


	return 0;
}
