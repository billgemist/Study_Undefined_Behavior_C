//undefined behavior number 63
/*type qualifiers C99 6.7.3*/
#include <stdio.h>

const int fun (int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
    int res = fun(23, 34);
	printf("%d\n", res);
	return 0;
}
