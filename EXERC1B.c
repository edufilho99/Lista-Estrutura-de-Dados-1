/*
Rotina
    Declare num, quadrado Numerico
    Escreva "*** Quadrado de um valor ***"
    Escreva "Insira um numero: "
    Receba num
    quadrado = num * num
    Escreva "O quadrado desse valor eh: "
    Escreva quadrado
FimRotina

*/

#include <stdio.h>

int main(){

    int num, quadrado;

    printf("*** Quadrado de um valor ***\n\n\n");

    printf("Insira um numero: ");
    scanf("%d", &num);

    quadrado = num*num;

    printf("O quadrado desse valor eh: %d", quadrado);

    return 0;
}
