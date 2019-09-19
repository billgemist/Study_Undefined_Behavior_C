//undefined behavior number 47
#include <stdio.h>

void happ(int *p1, int *p2){
	long *p3;
	int a = 10;
	if(a != 9){ 
		p3 = p2 - p1;
		printf("p3 = %ld \n", *p3);
	}
}


int main(){
	
	int arr[5] = {1, 2 ,3 ,4, 5};

	int *ptr1, *ptr2;

	ptr1 = &arr[0]; // einai to 1o stoixeio toy pinaka kai einai o arithmos 1
	ptr2 = &arr[2]; // logika tha einai o arithmos 3 dld to 3o stoixeio tou pinaka afou 0,1,2

	happ(ptr1, ptr2);

	return 0;
}
