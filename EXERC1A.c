/*
Rotina
    Declare MEDIA, V1, V2, V3 Numerico
    ESCREVA "*** Calculo de Media ***"
    Escreva "Insira o primeiro valor"
    Receba V1
    Escreva "Insira o segundo valor: "
    Receba V2
    Escreva "Insira o terceiro valor: "
    Receba V3
    MEDIA = (v1+v2+v3)/3
    Escreva "A media dos valores informados eh:"
    Escreva MEDIA
FimRotina
*/




#include <stdio.h>
#include <conio.h>

int main(){

    float media, v1, v2, v3;

    printf("*** CALCULO DE MEDIA ***\n\n\n");
    
    printf("Insira o primeiro valor: ");
        scanf("%f", &v1);

    printf("Insira o segundo valor: ");
        scanf("%f", &v2);

    printf("Insira o terceiro valor: ");
        scanf("%f", &v3);
    
    media = (v1 + v2 + v3)/3;

    system("cls");

    printf("A media dos valores informados eh: %.2f", media);
    printf("\nFim do Programa");


    return 0;

}