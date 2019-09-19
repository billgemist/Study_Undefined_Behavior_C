//undefined behavior number 75
#include <stdio.h>

int fun (){
	return 34;
}


int main(){
	int var = {4, 5};

	printf("%d\n", var);

	return 0;

}


