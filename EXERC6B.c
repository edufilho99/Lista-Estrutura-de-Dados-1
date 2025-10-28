#include <stdio.h>

int main(){

    int num, cont=1, total;

    printf("*** TABUADA DE 1 NUMERO (WHILE) ***\n\n\n");

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    printf(" \n\n*** SOMA ***\n\n");
   while(cont <= 10){
        total = num + cont;

        printf("%d + %d = %d\n", num, cont, total);
        cont++;
    }

cont = 1;

 printf(" \n\n*** SUBTRACAO ***\n\n");
    while(cont <= 10){
        total = num - cont;

        printf("%d - %d = %d\n", num, cont, total);
        cont++;
    }

    cont = 1;

 printf("\n\n*** MULTIPLICACAO ***\n\n");
    while(cont <= 10){
        total = num * cont;

        printf("%d * %d = %d\n", num, cont, total);
        cont++;
    }

cont = 1;

 printf("\n\n*** DIVISAO ***\n\n");
    while(cont <= 10){
        total = num / cont;

        printf("%d / %d = %d\n", num, cont, total);
        cont++;
    }

return 0;

}