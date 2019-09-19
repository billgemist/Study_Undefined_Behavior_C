// undefined behavior number 29
#include <stdio.h>

void __func__() { 
    int a = 10; 
}

int main() {
  	__func__();
  	return 0;
}
