/*10- Faça um programa que receba quatro números e imprima o maior e o menor número.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n[4], i;

    for (i = 0; i < 4; i++)
    {
        printf("digite um numero:\n");
        scanf("%d", &n[i]);
    }
    if (n[0] > n[i])
    {
        printf("O maior numero e:%d\n", n[0]);
    }
    else
        printf("O maior numero e:%d\n", n[i]);

    if (n[0] < n[i])
    {
        printf("O menor numero e:%d\n", n[0]);
    }

    else
        printf("O menor numero e:%d\n", n[i]);

    return 0;
}