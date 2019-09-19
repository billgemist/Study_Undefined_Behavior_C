//undefined behavior number 42
#include <stdio.h>
int main (){

    int n = 20;
    int b = 1;

    for(int i = 5; i >= 0; i--){
        n = n * i;
        b = n/n;
        if(n == 0)
            printf("n = %d, b(n/n) = %d\n", n, b);
    }
    
    return 0;

}


