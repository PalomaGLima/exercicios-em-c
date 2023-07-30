/*01- Faça um programa que receba um número e imprima ele caso seja maior que 20.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;

    printf("digite um numero:\n");
    scanf("%f", &n);

    if (n > 20)
    {
        printf("o número é:\n%.2f", n);
    }

    return 0;
}