//Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2
#include<stdio.h>
    int main(void)
{
   int area, base, altura;
   printf("\nDigite a base e a altura do triangulo:\n");
   scanf("%d%*c",&base);
   scanf("%d%*c",&altura);
   area = (base * altura) / 2;
   printf("A area do triangulo eh:\n%.2d%",area);


    getchar();
    return 0;
}
