//undefined behavior number 7
#include <stdio.h>

static int a; //internal linkage

int main(){
	
	extern int a; // external linkage
	
	return 0;
}
