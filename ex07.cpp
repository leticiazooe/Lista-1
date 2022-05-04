//Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
#include<stdio.h>

int main()

{
    float salario_b, bonus, imposto, salario_f;
    printf("\nDigite o valor do salario base:\n");
    scanf("%f%*c",&salario_b);
    bonus = 50;
    imposto = salario_b * 0.10;
    salario_f = salario_b + bonus - (imposto);
    printf("\nO valor do salario final eh: %f%\n", salario_f);
    getchar();
    return 0;

}
