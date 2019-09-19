//undefined behavior number 63
#include <stdio.h>

int volatile fun (int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
    int res = fun(23, 34);
	printf("%d\n", res);
	return 0;
}
