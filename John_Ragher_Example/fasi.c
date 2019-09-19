/*	example biz_main from John Ragher blog post part 3
*	https://blog.regehr.org/archives/232
*/
#include <stdio.h>
#include <limits.h>

int a;


void bar (){
	setlinebuf(stdout);
	printf("hello!\n");
}

void foo3(unsigned y, unsigned z){
	bar();
	a = y%z;
}


int main(){
	foo3(1,0);
	return 0;
}
