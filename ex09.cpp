//Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2
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
