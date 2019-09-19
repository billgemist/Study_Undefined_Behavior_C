//undefined behavior number 70
#include <stdio.h>

int *func(){
	static int d[2] = {2};
	return d;
}


int main(){
	//int arr[2];
	int *ptr;
	ptr = func();
	//arr = func();
    for(int i = 0; i < 2; i++)
		printf("arr[i]=%d\n", ptr+1);
	return 0;
}

/*gcc -Wall -std=c99 -pedantic ub70_1.c -o g*/

