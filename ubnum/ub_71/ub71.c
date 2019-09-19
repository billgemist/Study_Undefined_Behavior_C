//undefined behavior number 71
#include <stdio.h>

int foo (int arr[static 10]){
	int sum = 0;

	sum = sum + arr[8];

	return sum;
}


int main(){
	
	int m_arr[4] = {1,1,1,1};
    int y = foo(m_arr); //undefined behavrior needs at least 10

	printf("y = %d\n", y); //printf will be removed...

	return 0;
}
