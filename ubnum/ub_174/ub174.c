//undefined behavior number 174
#include <stdio.h>
#include <stdlib.h>

void trstr(char *c_str, char orig, char rep) {
  while (*c_str != '\0') {
    if (*c_str == orig) {
      *c_str = rep;
    }
    ++c_str;
  }
  printf("trstr = %s\n", c_str);
}

void func() {
  //char *env = getenv("TEST_ENV"); //PATH
  char *env = getenv("PATH"); //PATH

  printf("%s\n", env);
  if (env == NULL) {
    /* Handle error */
	printf("ERROR\n");
  }
  //trstr(env,'"', '_');
  trstr(env,'/', '_');
}

int main(){
	
	func();
    
	return 0;
}
