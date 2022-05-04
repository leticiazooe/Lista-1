#include <stdio.h>
int main()
{
    int n1, n2, n3, soma;
    printf("\nDigite o valor do primeiro numero\n");
    scanf("%d%*c",&n1);
    printf("\nDigite o valor do segundo numero\n");
    scanf("%d%*c",&n2);
    printf("\nDigite o valor do terceiro numero\n");
    scanf("%d%*c",&n3);
    soma = (n1 + n2 + n3)/3;
    printf("\nO valor da media eh: %d%", soma);
    getchar();
    return 0;
}

