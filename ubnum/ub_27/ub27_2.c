//undefined behavior number 27
#include <stdio.h>

void fun(){
	int \u0660abc = 10;
	printf("%d \n", \u0660abc);
}


int main(){	
	int getN;
	printf("Enter a number: ");
	scanf("%d", &getN);

	if(getN != 0){
		fun();
	}		
	return 0;
}
