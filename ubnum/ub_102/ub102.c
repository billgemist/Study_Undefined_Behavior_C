//undefined behavior number 102
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "10348593");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "something else");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

	//undefined section
	char *ptr = NULL;
	val = atoi(ptr);
   //printf("3rd val: %d\n", val);

	//int a = 10;
	//val = atoi(a);


   return(0);
}
