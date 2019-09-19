//undefined behavior number 42
#include <stdio.h>
int main (){

    int n = 20;
    int b = 1;

    for(int i = 5; i >= 0; i--){
        n = n * i;
        b = 10000/n;
        if(n==0)
            printf("b(10000/n)=%d\n", b); /*if the value of b will not be used there will be no error(gcc)*/ 
    }
    
    return 0;

}

