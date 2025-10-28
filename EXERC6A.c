#include <stdio.h>

int main(){

    int num, cont=1, total;

    printf("*** TABUADA DE 1 NUMERO ***\n\n\n");

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    printf(" \n\n*** SOMA ***\n\n");
    do{
        total = num + cont;

        printf("%d + %d = %d\n", num, cont, total);
        cont++;
    }while(cont <= 10);

cont = 1;

 printf(" \n\n*** SUBTRACAO ***\n\n");
    do{
        total = num - cont;

        printf("%d - %d = %d\n", num, cont, total);
        cont++;
    }while(cont <= 10);

    cont = 1;

 printf("\n\n*** MULTIPLICACAO ***\n\n");
    do{
        total = num * cont;

        printf("%d * %d = %d\n", num, cont, total);
        cont++;
    }while(cont <= 10);

cont = 1;

 printf("\n\n*** DIVISAO ***\n\n");
    do{
        total = num / cont;

        printf("%d / %d = %d\n", num, cont, total);
        cont++;
    }while(cont <= 10);

return 0;

}