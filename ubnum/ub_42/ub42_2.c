//undefined behavior number 42
#include <stdio.h>

int func(){
    int gv;
    printf("Enter a integer number: ");
    scanf("%d", &gv);
    return gv;
}


int main (){

    
    int n = (23/func());

    printf("%d\n", n);
    
    return 0;

}


