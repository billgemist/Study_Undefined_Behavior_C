//undefined behavior number 30
#include <stdio.h>


int main(){
	
	char str[] = "is this undefined behavior number 30?";
	printf("str = %s\n", str);
	str[2] = 'L'; 
	
	if(str[2] == 'L'){

		printf("str = %s\n", str);
	}
	
	return 0;
}

