//undefined behavior number 83
/*https://docs.microsoft.com/en-us/cpp/c-language/incomplete-types?view=vs-2019*/
#include <stdio.h>

int main(){
	static char arr[]; //incomplete type and tentative definition, internal linkage

    
	return 0;
}

/* 
*Example 1 at C99-6.9.2/4
int i1 = 1;				    //definition, external linkage
static int i2 = 2;		   //definition, internal linkage
extern int i3 = 3;		   //definition, external linkage
int i4;					   //tentative definition, external linkage 
static int i5;				//tentative definition, internal linkage
*/

