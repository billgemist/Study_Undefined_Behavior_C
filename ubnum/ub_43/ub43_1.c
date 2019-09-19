//undefined behavior number 43
#include <stdio.h>

enum {TSIZE = 11};

char t[TSIZE] = {"number41_1"};


char *fun (int index){
	if(index < 10){
		return t + index;
	}
	return NULL;
}

int main(){
	
	char *ptr = fun(-1);

	printf("%s\n", ptr);
    
	return 0;
}
