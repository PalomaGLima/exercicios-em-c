/*03. Faça um programa que receba um número e imprima se ele é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("digite um numero:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("par");
    }
    else
    {
        printf("impar");
    }

    return 0;
}