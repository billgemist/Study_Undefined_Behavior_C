//undefined behavior number 81
#include <stdio.h>

static void fun(int a, ...);

void fun(int a, int b, int c)
{
    printf("%d\n", a);
}

int main(){
    
    fun(34, 23, 41);

    return 0;
}

