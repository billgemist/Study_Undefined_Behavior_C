//undefined behavior number 27
#include <stdio.h>

int main(){
	
	//int a\u0660 = 10;

	int \u0660abc = 10; //undefined behavior

	printf("%d \n", \u0660abc); //will be removed
    
	return 0;
}
