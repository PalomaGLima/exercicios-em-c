/*13. Faça um programa que receba um número e imprima apenas “é válido” ou “não é
válido” caso ele satisfaça pelo menos uma das condições: ser igual a 5, ser igual a 200,
estar entre 10 e 100, estar entre 250 e 500.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("digite um numero:\n");
    scanf("%d", &n);

    if (n == 5 || n == 200)
    {
        printf("e valido");
    }
    else if (n > 10 && n < 100)
    {
        printf("e valido");
    }
    else if (n > 250 && n < 500)
    {
        printf("e valido");
    }
    else
        printf("nao e valido");

    return 0;
}