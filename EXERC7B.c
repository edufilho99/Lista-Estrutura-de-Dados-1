#include <stdio.h>

float media( float n1, float n2, float n3, float n4){

    float md;

    md = (n1 + n2 + n3 + n4)/4;
    return (md);
}

int main(){

    float n_1, n_2, n_3, n_4, med;

    printf("*** Calculo de media ***\n\n\n");

    printf("Insira a nota 1: ");
    scanf("%f", &n_1);

    printf("Insira a nota 2: ");
    scanf("%f", &n_2);
    
    printf("Insira a nota 3: ");
    scanf("%f", &n_3);
    
    printf("Insira a nota 4: ");
    scanf("%f", &n_4);

    med = media(n_1, n_2, n_3, n_4);

    printf("A media eh %.3f", med);
    
return 0;
}