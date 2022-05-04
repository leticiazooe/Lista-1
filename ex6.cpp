//Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.
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
