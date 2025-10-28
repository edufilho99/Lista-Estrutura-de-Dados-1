/*
Rotina
    Declare dia_nasc, mes_nasc, ano_nasc, valor_mesada Numerico
    Declare nome Caractere
    Escreva "*** Informacoes Gerais do Usuario ***" 
    Escreva "Insira o nome: "
    Receba nome
    Escreva "Insira o dia que nasceu: "
    Receba dia_nasc
    Escreva "Insira o mes que nasceu: "
    Receba mes_nasc
    Escreva "Insira o ano que nasceu: "
    Receba ano_nasc
    Escreva "Insira o valor da mesada a receber: "
    Receba valor_mesada 
    Escreva "Exibição dos dados informados: "
    Escreva nome
    Escreva dia_nasc, mes_nasc, ano_nasc
    Escreva valor_mesada
FimRotina
*/

#include <stdio.h>

int main(){

    char nome[15];
    int dia_nasc, mes_nasc, ano_nasc;
    float valor_mesada;

    printf("*** Informacoes Gerais do Usuario *** \n\n\n");

    printf("Insira o nome: ");
    scanf("%15s", &nome);

    printf("Insira o dia que nasceu: ");
    scanf("%d", &dia_nasc);

    printf("Insira o mes que nasceu: ");
    scanf("%d", &mes_nasc);

    printf("Insira o ano que nasceu: ");
    scanf("%d", &ano_nasc);

    printf("Insira o valor da mesada a receber: ");
    scanf("%f", &valor_mesada);

    printf("Exibição dos dados informados: \n\n");
    printf("Nome: %s", nome);
    printf("\nData de nascimento: %d/%d/%d", dia_nasc, mes_nasc, ano_nasc);
    printf("\nValor da Mesada: %.f", valor_mesada);

    return 0;


}