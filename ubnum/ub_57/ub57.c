//undefined behavior number 57
/*paromoio https://rules.sonarsource.com/c/RSPEC-824*/
#include <stdio.h>

void foo();

int main(){
	foo();
	fun(1);
	return 0;
}

void foo(){
	void fun(int a); //declare a function at a block scope
}

void fun (int a){
	printf("undefined behavior no 57\n");
}

