//undefined behavior number 10
#include <stdio.h>
extern int is_prime(int num);
int main(){

  int M = 5;
  int N;

  //printf("M = %d\n", M);
  //printf("N = %d\n", N);

  if( is_prime(8)){
    N = 10;
    //printf("inside 1st if N = %d\n", N);
  }

  if(is_prime(8)){ //diaforo tou miden
    //printf("second if. N = %d \n", N);
    M = N;
  }

  return M;
}

