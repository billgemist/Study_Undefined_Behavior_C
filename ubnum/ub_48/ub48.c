//undefined behavior number 48
#include <stdio.h>

int main(){
	
	int x = 5 << -3;
	int y = 5 >> -3;
    
	printf("x= %d || y = %d\n", x, y); //printf will be removed...

	return 0;
}

