#include <stdio.h>

int main() {
    int v1, v2;

   
    printf("Digite o valor da variável 1: ");
    scanf("%d", &v1);

    printf("Digite o valor da variável 2: ");
    scanf("%d", &v2);

    
    if (&v1 > &v2) {
        printf("O conteúdo do maior endereço é: %d\n", v1);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", v2);
    }

    return 0;
}
