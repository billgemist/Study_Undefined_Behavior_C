//undefined behavior number 41
#include <stdio.h>

int main(){
	int a = 103;
	int *ptr = &a;
    
	double dbl = (double) ptr;

    printf("%f\n", dbl);
	return 0;
}
