//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = π * R^2
#include<stdio.h>
#include<math.h>
#define pi 3,14159
int main(void)
{
    float area, raio;
    printf("\nDigite o raio do circulo\n");
    scanf("%f%*c",&raio);
    area = (pow (raio, 2))* pi;
    printf("\nA area do circulo eh: %.2f%", area );


    getchar();
    return 0;
}
