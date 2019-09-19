//undefined behavior number 59
/* like example
https://wiki.sei.cmu.edu/confluence/display/c/ARR30-C.+Do+not+form+or+use+out-of-bounds+pointers+or+array+subscripts#ARR30-C.Donotformoruseout-of-boundspointersorarraysubscripts-PointerPastFlexibleArrayMember
*/
#include <stdio.h>
#include <stdlib.h>
  
struct book{
	int value;
	int isbn[]; //flexible array member
};

int *find(struct book *tst, int f){
	int *first = tst->isbn;
	int *last = tst->isbn+0;

	printf("%d\n", *first++); //crashes here
	while(first++ != last){ // undefined behavior
		if(*first == f){
			return first;
		}
	}
	return NULL;
}

int main(){
	int *ptr;
	struct book *tst = (struct book *)malloc(sizeof(struct book));
	if(tst == NULL){
		printf("ERROR\n");
		return 1;
	}
	ptr = find(tst, 10);
	if(ptr != NULL){
		printf("ptr = %d\n", *ptr);	
	}
	else{
		printf("returned null\n");
	}
	free(tst);
	return 0;
}

