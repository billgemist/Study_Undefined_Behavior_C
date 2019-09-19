//undefined behavior number 69
#include <stdio.h>

void func(int n){
	int arr[n];
	int sz = sizeof(arr);
	printf("%d\n", sz);
}

int main(){
	int given=0;
	while(given != 22){ //22 for ending
		printf("please enter a integer value: ");
		scanf("%d", &given);
		if(given != 22)
			func(given); //if given <= 0, then the behavior is undefined as standard say
	}
	return 0;
}



/*
Tested Examples
input: 3.000 ---> Output: 12.000

input: -3.000 ---> Output: Segmentation fault (core dumped)


input: 2.000 ---> Output: 8.000

input: -2.000 ---> Output: -8.000
*/

