//Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.

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
