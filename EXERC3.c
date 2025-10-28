#include <stdio.h>
#include <math.h>

int main(){

    float w, z, a1, a2, a3;

    printf("*** Expressoes Numericas ***\n\n\n");

    printf("Insira o primeiro numero: ");
        scanf("%f", &w);

    printf("Insira o segundo numero: ");
        scanf("%f", &z);

    printf("\n\nA1: \n");

        a1 = (w + z)/2;

        printf("O resultado eh: %f\n\n", a1);

    printf("A2: \n");

        a2 = pow((((w + 100)*sqrt(z))/w), 3);

        printf("O resultado eh: %f\n\n", a2);

    printf("A3: \n");

        a3 = sqrt(pow(w,2)+pow(z,2));

        printf("O resultado eh: %f", a3);
         printf("\nFim do programa!");

    return 0;

}