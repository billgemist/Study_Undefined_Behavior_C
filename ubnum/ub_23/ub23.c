//undefined behavior number 23
/*
like example: https://wiki.sei.cmu.edu/confluence/display/c/EXP37-C.+Call+functions+with+the+correct+number+and+type+of+arguments
*/
#include <stdio.h>
#include <string.h>
 
char *(*fp)();
 
int main() {
  const char *cr;
  
  fp = strchr;
  
  cr = fp('e', "Undefined");
  printf("%s\n", cr);
  return 0;
}

/* In this noncompliant example, the C standard library function strchr() is called through 
the function pointer fp declared with a prototype with incorrectly typed arguments. 
According to the C Standard, 6.3.2.3, paragraph 8 */


