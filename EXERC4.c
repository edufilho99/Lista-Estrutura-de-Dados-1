#include <stdio.h>

int main(){

    int ano;

    printf("*** Calculo Ano Bissexto ***\n\n\n");

    printf("Insira o ano que deseja realizar o calculo: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("O ano em questao eh bissexto!");
        printf("\nFim do programa!");
    } else printf("O ano em questao nao eh bissexto");

    return 0;
}