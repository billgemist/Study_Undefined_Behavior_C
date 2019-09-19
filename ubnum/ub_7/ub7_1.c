//undefined behavior number 7
#include <stdio.h>

static int a = 23; //internal linkage
/*here is internal (source: https://stackoverflow.com/questions/39767348/external-internal-and-no-linkage-or-why-this-does-not-work)
*/

int main(){
	
	extern int a; // external linkage
	
	return 0;
}
