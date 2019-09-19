//undefined behavior number 16
/*Carnegie Mellon: https://wiki.sei.cmu.edu/confluence/display/c/FLP34-C.+Ensure+that+floating-point+conversions+are+within+range+of+the+new+type
"Narrowing Conversion"*/
#include <stdio.h>
#include <float.h>

void func(double da, long double ld) {
	double db = (float)ld;
	float fa = (float)da;
	float fb = (float)ld;

	printf("db= %f\n", db);
	printf("fa= %f\n", fa);
	printf("fb= %f\n", fb);
}


int main(){

	long double alpha = 10.00000;
	double beta = DBL_MAX;

	func(beta, alpha);

	return 0;
}
