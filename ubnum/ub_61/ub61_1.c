//undefined behavior number 61
/*like an example from Carnegie Mellon University 
url: https://wiki.sei.cmu.edu/confluence/display/c/EXP05-C.+Do+not+cast+away+a+const+qualification
*/
#include <stdio.h>

void ub(const char *str) {
  char *p = (char *)str; /*const casted away*/
  //printf("*p++ = %c\n",*(p+1));
  *(p+1) = str[3]; /*modified the second element with the str[4](that is the 't'*/
  printf("p = %s\n",p);
}
        


int main(){

  char str[15] = "epitelous test";
	const char *ptstr = str;
	ub(ptstr);
	//printf("str %s\n", str); /**/
	//printf("add of str %p\n", &str); /**/  
	//printf("add of ptstr %p\n", (void *)ptstr); /**/ 
  //printf("mptr address is = %p\n",  &mptr); /**/
  //printf("mptr address is = %p\n", (void *)&mptr); /**/
	return 0;
}

