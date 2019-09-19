//undefined behavior number 82
#include <stdio.h>

int func(int *ptr, int size, int check){
	for (int i =0; i < size; i++){
		if(ptr[i] == check){
			return 1;
		}
	}
}

int main(){
	

	int arr[3] = {1, 24, 810};
	int c = 23;

	//printf("Enter a value: ");
    //scanf("%d", &c);
	
	int val = func(arr, sizeof(arr), c);

	printf("return of func() = %d\n", val); //will be removed

	return 0;
}
