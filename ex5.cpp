//Faça  um  programa  que  receba  o  salário  de  um  funcionário  e  o  percentual  de aumento, calcule e mostre o valor do aumento e o novo salário.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float salario, aumento, valor, novo_salario;
    printf("\nDigite o valor do salário:\n");
    scanf("%f%*c",&salario);
    printf("\nDigite o percentual de aumento:\n");
    scanf("%f%*c",&aumento);
    valor = (aumento/100) * salario;
    novo_salario = valor + salario;
    printf("\nO valor do aumento é: R$%4.2f%\n", valor);
    printf("\nO valor do novo salario é: R$%4.2f%\n", novo_salario);



    getchar();
    return 0;
}
