#include <stdio.h>

int main() {
    int numero, i = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);

inicio: // rótulo usado para o goto
    printf("%d x %d = %d\n", numero, i, numero * i);
    i++;

    if (i <= 10)
        goto inicio;  // desvio condicional para repetir o bloco

    return 0;
}