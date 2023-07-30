/*04. Faça um programa que receba um número e imprima se ele é positivo, negativo ou
nulo (zero).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("digite um numero:\n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("seu numero e positivo");
    }
    else if (n < 0)
    {
        printf("seu numero e negativo");
    }
    else
    {
        printf("seu numero e nulo");
    }

    return 0;
}