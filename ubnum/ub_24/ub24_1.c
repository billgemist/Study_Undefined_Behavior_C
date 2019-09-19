//undefined behavior number 24
#include <stdio.h>

int foo(int a, int b){
	return (a+b);
}


int main(){
	int res = foo(10, 10);

	if(res > 1){
		char c = 'b;
	}
    
	return 0;
}
