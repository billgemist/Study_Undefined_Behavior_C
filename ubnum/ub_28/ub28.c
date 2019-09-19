//undefined behavior number 28
#include <stdio.h>
//#include "ub28.h"
extern int global_symbol_definition_lookup_table_a;
extern int global_symbol_definition_lookup_table_b;


int main(){
	// in C99 translation limits section 5.2.4.1 
	
	int sum = global_symbol_definition_lookup_table_a + global_symbol_definition_lookup_table_b;

	printf("sum = %d \n", sum); //printf will be removed...
	return 0;
}
