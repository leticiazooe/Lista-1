/*Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a soma
desses n�meros.*/
#include <stdio.h>
int main ()
{
    int n1, n2, n3, n4,soma;
    printf  ("\nDigite o valor do primeiro numero:\n"); //prinft= imprimir algo na tela
    scanf ("%d%*c",&n1);
    printf  ("\nDigite o valor do segundo numero:\n");
    scanf ("%d%*c",&n2);
    printf ("\nDigite o valor do terceiro numero:\n");
    scanf ("%d%*c",&n3);
    printf   ("\nDigite o valor do quarto numero:\n");
    scanf ("%d%*c",&n4);
    soma = n1+n2+n3+n4;
    printf  ("\nO valor da soma e %d%", soma);
    getchar ();
    return 0;
}

