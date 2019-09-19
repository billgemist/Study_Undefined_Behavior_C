#include <stdio.h>

int main(){

	int i = 23;
	int b = 34;

    int *g = &i;
    int *p = &b;

    printf("the value of p is = %d\n", *p);
    printf("the address of object that p points into = %p\n", (void *) p);
    printf("p address is = %p\n", (void *) &p); //The argument shall be a pointer to void 

    printf("------------------\n");

    printf("the value of g is = %d\n", *g);
    printf("the address of object that g points into = %p\n", (void *) g);
    printf("g address is = %p\n", (void *) &g);

printf("------------------\n");

    printf("i address = %p\n", &i);
    printf("b address = %p\n", &b);
    
	return 0;
}


/*https://stackoverflow.com/questions/5286451/how-to-print-variable-addresses-in-c*/