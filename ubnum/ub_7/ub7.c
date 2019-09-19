//undefined behavior number 7
#include <stdio.h>

static int a = 23; //internal linkage

int main(){
	int a; // no linkage
	
	extern int a; // external linkage
	
	return 0;
}
