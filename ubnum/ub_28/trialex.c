#include <stdio.h>
extern int alpha; 
extern int beta;
int main(){
	alpha = 10;
	beta = 20;

	printf("%d \n", alpha);
	printf("%d \n", beta);

	return 0;
}
