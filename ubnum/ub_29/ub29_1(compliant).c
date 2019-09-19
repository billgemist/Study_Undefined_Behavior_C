//undefined behavior number 29
//example of how __func__ works

#include <stdio.h>

void myFunction(){
	printf("%s\n", __func__);
}


int main(){
	
	myFunction();
    
	return 0;
}
