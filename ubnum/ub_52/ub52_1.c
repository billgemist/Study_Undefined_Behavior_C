//undefined behavior number 52
//https://stackoverflow.com/questions/14081737/clarification-on-integer-constant-expressions
#include <stdio.h>

int main(){

	int a = sizeof (struct { int a:((int) (5/3.14f));});
	printf("%d\n", a);
    
	return 0;
}
