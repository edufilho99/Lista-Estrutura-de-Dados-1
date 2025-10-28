#include <stdio.h>


int main(){

    float media, v1, v2, v3;

    printf("*** CALCULO DE MEDIA ***\n\n\n");
    
    printf("Insira o primeiro valor: ");
        scanf("%f", &v1);

    printf("Insira o segundo valor: ");
        scanf("%f", &v2);

    printf("Insira o segundo valor: ");
        scanf("%f", &v3);
    
    media = (v1 + v2 + v3)/3;

    printf("A media dos valores informados eh: %.2f", media);
    printf("\nFim do Programa");


    return 0;

}