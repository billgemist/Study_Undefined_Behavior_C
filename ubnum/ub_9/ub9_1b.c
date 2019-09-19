//undefined behavior number 9 second example
// https://wiki.sei.cmu.edu/confluence/display/c/DCL30-C.+Declare+objects+with+appropriate+storage+durations
#include <stdio.h>

const char *ptr;

void func(){
	const char c_str[] = "This is it";
	ptr = c_str; /*undefined behavior*/
}

void what_happened(){
	printf("s = %s\n", ptr);
}


int main(){
	func();
	what_happened();
	return 0;
}

