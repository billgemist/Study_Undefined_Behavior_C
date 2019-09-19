//undefined behavior number 55
#include <stdio.h>
/*An address constant is a null pointer, 
a pointer to an lvalue designating an object of static
storage duration*/
int main(){
	
	int a[5];

	a[2] = 6;
	3[a] = 7; 
    
	printf("%d\n", a[3]);

	return 0;
}
