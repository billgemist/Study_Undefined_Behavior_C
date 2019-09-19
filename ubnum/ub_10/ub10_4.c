//undefined behavior number 10
#include <stdio.h>
int is_prime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int main(){

  int M = 5;
  int N;

  //printf("M = %d\n", M);
  //printf("N = %d\n", N);

  if( (7 % M) != 0 ){
    N = 10;
    //printf("inside 1st if N = %d\n", N);
  }

  if(is_prime(7)){ //diaforo tou miden
    //printf("second if. N = %d \n", N);
    M = N;
  }

  return M;
}

