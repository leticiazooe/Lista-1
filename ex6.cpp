//Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tamb�m sobre o sal�rio base.
#include <stdio.h>

int main()
{
    float salario_b, bonus, imposto, salario_f;
    printf("\nDigite o valor do salario base:\n");
    scanf("%f%*c",&salario_b);
    bonus = (0.05 * salario_b);
    imposto = (0.07 * salario_b);
    salario_f = (salario_b + bonus) - imposto;
    printf("\nO salario a receber eh: R$%.2f%", salario_f);


getchar();
return 0;
}
