//undefined behavior number 69
#include <stdio.h>

int func(int n){
	int arr[n]; //undefined
	return (sizeof(arr));
}

int main(){
	
	
	printf("func(0) = %d\n", func(0)); //undefined
	printf("func(-10) = %d\n", func(-10)); //undefined

	//func(1); //defined
	//func(-10); //undefined

	return 0;
}
