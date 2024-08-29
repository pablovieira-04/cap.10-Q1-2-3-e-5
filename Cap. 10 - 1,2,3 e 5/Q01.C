#include <stdio.h>

int main() {
    int v1, v2;

    
    if (&v1 > &v2) {
        printf("O maior endereço é o da variável var1: %p\n", (void*)&v1);
    } else {
        printf("O maior endereço é o da variável var2: %p\n", (void*)&v2);
    }

    return 0;
}
