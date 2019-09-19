//undefined behavior number 61
//example from Carnegie Mellon University 
#include <stdio.h>

void remove_spaces(const char *str, size_t slen) {
  char *p = (char *)str;
  size_t i;
  for (i = 0; i < slen && str[i]; i++) {
    if (str[i] != ' ') *p++ = str[i];
  }
  while(*p!='\0')
        printf("%c",*p++);
  *p = '\0';
}
//

int main(){

  char str[15] = "epitelous test";
	const char *ptstr = str;

	printf("str %s\n", str);
	printf("add of str %p\n", &str);  
	printf("add of ptstr %p\n", (void *)ptstr);  
  //printf("mptr address is = %p\n",  &mptr);
  //printf("mptr address is = %p\n", (void *)&mptr);

	remove_spaces(ptstr, sizeof(str));
    
	return 0;
}

