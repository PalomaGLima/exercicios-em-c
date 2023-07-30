/*08. Faça um programa que receba um número a e um número b. Verifique se a é divisível
por b ou não e imprima na tela essa informação.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;

    printf("digite dois numeros:\n");
    scanf("%d%d", &a, &b);

    if (a % b == 0)
    {
        printf("E divisivel");
    }

    else
        printf("nao e divisivel");

    return 0;
}