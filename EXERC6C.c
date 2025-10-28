#include <stdio.h>

int main(){

    int num, cont, total;

    printf("*** TABUADA DE 1 NUMERO (FOR) ***\n\n\n");

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    printf(" \n\n*** SOMA ***\n\n");
   for(cont=1;cont<11;cont++){
        total = num + cont;

        printf("%d + %d = %d\n", num, cont, total);
    }

 printf(" \n\n*** SUBTRACAO ***\n\n");
    for(cont=1;cont<11;cont++){
        total = num - cont;

        printf("%d - %d = %d\n", num, cont, total);
    }

 printf("\n\n*** MULTIPLICACAO ***\n\n");
   for(cont=1;cont<11;cont++){
        total = num * cont;

        printf("%d * %d = %d\n", num, cont, total);
    }

cont = 1;

 printf("\n\n*** DIVISAO ***\n\n");
     for(cont=1;cont<11;cont++){
        total = num / cont;

        printf("%d / %d = %d\n", num, cont, total);
    }

return 0;

}