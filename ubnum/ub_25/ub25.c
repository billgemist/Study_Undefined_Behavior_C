//undefined behavior number 25
#include <stdio.h>

void switch(int a, int b){
	printf("Undefined\n");
}


int main(){
	
	switch(10, 20);
    
	return 0;
}


