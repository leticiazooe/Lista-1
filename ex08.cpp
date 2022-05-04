//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
#include<stdio.h>

int main()

{
    float deposito, juros, rendimento, valor_t;
    printf("\nInforme o valor do deposito:\n");
    scanf("%f%*c",&deposito);
    printf("\nInforme o valor da taxa de juros:\n");
    scanf("%f%*c",&juros);
    rendimento = deposito * (juros/100);
    valor_t = rendimento + deposito;
    printf("\nO valor do rendimento eh: %.2f%\n", rendimento);
    printf("\nO valor total eh: %.2f%\n", valor_t);
    getchar();
    return 0;
}
