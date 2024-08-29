#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array; 

    
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", ptr + i);  
    }

    
    printf("\nDobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, 2 * (*(ptr + i)));  
    }

    return 0;
}
