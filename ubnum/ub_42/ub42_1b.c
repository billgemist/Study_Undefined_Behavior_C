//undefined behavior number 42
#include <stdio.h>
int main (){

    int n = 20;
    int b = 1;

    for(int i = 5; i >= 0; i--){
        n = n * i;
        b = 10000/n;
    }
    
    return 0;

}

