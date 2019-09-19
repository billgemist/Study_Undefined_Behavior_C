//undefined behavior number 41
//like the example from (rule)11.7
#include <stdio.h>

int main(){
	int * p;
	float f;
	f = ( float ) p;	//non-compliant, undefined behavior
	p = ( int * ) f;	//non-compliant, undefined behavior
	return 0;
}
