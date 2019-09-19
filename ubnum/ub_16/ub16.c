//undefined behavior number 16
#include <stdio.h>
#include <float.h>


int main(){

	//double a = FLT_MAX ^ 2; // when compiles throws an error see picture 
	double a = 123.134;
	double a1 = DBL_MAX;

	float b = (float) a;
	float b1 = (float) a1;

	printf("a= %f\n", a);
	printf("b= %f\n", b);

	printf("a1= %f\n", a1);
	printf("b1= %f\n", b1);

	return 0;
}
