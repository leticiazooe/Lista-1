//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

    int main()
{
    float salario, aumento, novo_salario;
    printf("\nDigite o salario atual:\n");
    scanf("%f%*c",&salario);
    aumento = salario * 0.25;
    novo_salario = aumento + salario;
    printf("\nO valor do novo salario eh: %3.2f%", novo_salario);

    getchar();
    return 0;

}
