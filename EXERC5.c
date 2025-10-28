#include <stdio.h>

int main(){

    int opcao;
    float var1, var2, result;

    printf("*** Calculadora *** \n\n\n");

    printf("Insira o primeiro valor: ");
    scanf("%f", &var1);

    printf("Insira o segundo valor: ");
    scanf("%f", &var2);

    printf("1 - SOMA \n"); 
    printf("2 - SUBTRACAO \n");
    printf("3 - MULTIPLICACAO \n");
    printf("4 - DIVISAO \n");
    printf("\n\nEscolha uma opcao:");

    scanf("%d", &opcao);

    switch (opcao){
    case 1: 
        printf("*** SOMA ***\n\n");
        
        result = var1 + var2;

        printf("O resultado de %.1f + %.1f eh: %.1f", var1, var2, result);
        
        break;
    
    case 2:
        printf("*** SUBTRACAO ***\n\n");

        result = var1 - var2;

        printf("O resultado de %.1f - %.1f eh: %.1f", var1, var2, result);
        
        break;
   
    case 3:
        printf("*** MULTIPLICACAO ***\n\n");

        result = var1 * var2;

        printf("O resultado de %.1f * %.1f eh: %.1f", var1, var2, result);

        break;
    
    case 4: 
         printf("*** DIVISAO ***\n\n");

        if(var2 != 0 || var1 != 0){ 
        result = var1 / var2;

        printf("O resultado de %.1f / %.1f eh: %.1f", var1, var2, result);
        } else printf("Opcao invalida para os numeros informados");
        break;
    default:
        printf("Opcao inválida");
        break;
    }

}