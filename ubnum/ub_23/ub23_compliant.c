//undefined behavior number 23 -- compliant solution
/*
In this compliant solution, the function pointer fp, which points to the C standard library 
function strchr(), is declared with the correct parameters and is invoked with the correct 
number and type of arguments
*/
#include <stdio.h>
#include <string.h>
 
char *(*fp)(const char *, int);
 
int main(void) {
  const char *cr;
  fp = strchr;
  cr = fp("Undefined",'e');
  printf("%s\n", cr);
  return 0;
}