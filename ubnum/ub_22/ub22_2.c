//undefined behavior number 22
#include <stdio.h>

  
int *loop_function(void *v_pointer) {

  return v_pointer;
}
  
void func(char *char_ptr) {
  int *int_ptr = loop_function(char_ptr);
	printf("%c\n", *int_ptr); /*if this printf is not commented out the FSAN tool throws and error*/
}



int main(){
	char v = 'v';
	char *vptr = &v;


	func(vptr);

	return 0;
}
