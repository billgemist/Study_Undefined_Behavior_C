//undefined behavior number 70
#include <stdio.h>

void func(int n){
	int a[10][n];
	int (*p)[20];
	/* Undefined unless n == 20: incompatible types otherwise */
	p = a;
}


int main(){
	
	func(10);
    
	return 0;
}
