/*12. Faça um programa que receba um inteiro e imprima se ele se encontra entre 20 e 90
ou não.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("digite um numero:\n");
    scanf("%d", &n);

    if (n >= 20 && n <= 90)
    {
        printf("se encontra");
    }
    else
        printf("nao se encontra");

    return 0;
}