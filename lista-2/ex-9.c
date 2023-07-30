/*09. Faça um programa que receba dois inteiros diferentes. Imprima na tela o maior e o
menor número.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2;

    printf("digite dois numeros:\n");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        printf("o maior e:%d\n", n1);
        printf("o menor e:%d\n", n2);
    }
    else if (n2 > n1)
    {
        printf("o maior e:%d\n", n2);
        printf("o menor e:%d\n", n1);
    }
    else
        printf("sao iguais3");

    return 0;
}