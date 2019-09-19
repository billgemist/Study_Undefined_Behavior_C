//undefined behavior number 105
#include <assert.h>
#include <stdio.h>
#include <string.h>

struct Person {
   char  fname[10];
   char  lname[10];
};

int main () {

	struct Person myPer;
	strcpy( myPer.fname, "Vasilis");
	strcpy( myPer.lname, "Gemistos");
	//int a = 1;
	//int str[3] = {1, 2, 3};
		
	//assert(a >= 10); // if a >= 10 then not abort 

	assert(myPer);
	printf("not stopped\n"); //will be removed


	return(0);
}

