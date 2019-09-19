//undefined behavior number 82
#include <stdio.h>

int func(int a, int b){
	//return (a+b);
}

int main(){
	
	int val = func(1, 2);
    
	printf("%d\n", val); //here printf shows the "returned" value that every compiler shows, so will not be removed

	return 0;
}
