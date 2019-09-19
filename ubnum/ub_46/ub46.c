//undefined behavior number 46
#include <stdio.h>


int main(){
	
	int arr[4][5] = {{11,12,13,14,15},{21,22,23,24,25},{31,32,33,34,35},{41,42,43,44,45}};


	int b = arr[1][7];

	printf("%d\n", b);

	return 0;
}
