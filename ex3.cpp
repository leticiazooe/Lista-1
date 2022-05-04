//Faça  um programa  que  receba  três  notas  e  seus  respectivos  pesos,  calcule  e mostre a média ponderada.
#include <stdio.h>

    int main()
{
    float n1, n2, n3, p1, p2, p3, media;
    printf("\nDigite as tres notas e seus pesos\n");
    scanf("%f%*c",&n1);
    scanf("%f%*c",&n2);
    scanf("%f%*c",&n3);
    scanf("%f%*c",&p1);
    scanf("%f%*c",&p2);
    scanf("%f%*c",&p3);
    media = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("\nO valor da media é: %f%", media);

    getchar();
    return 0;

}
