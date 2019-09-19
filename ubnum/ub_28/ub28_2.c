//undefined behavior number 28
#include <stdio.h>
//#include "ub28.h"
//extern int *global_symbol_definition_lookup_table_a;
//extern int *global_symbol_definition_lookup_table_b;


int main(){

	int global_symbol_definition_lookup_table_amsterdam_university_master_A = 10;
	int global_symbol_definition_lookup_table_amsterdam_university_master_B = 11;



	printf("%d \n", global_symbol_definition_lookup_table_amsterdam_university_master_A); //printf will be removed...
	printf("%d \n", global_symbol_definition_lookup_table_amsterdam_university_master_B);	

	return 0;
}
