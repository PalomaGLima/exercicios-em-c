/*03. Faça um programa que receba dois números inteiros e imprima a soma desses dois números.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,soma;
    printf("digite um numero:\n");
    scanf("%d",&n1);

    printf("digite um numero:\n");
    scanf("%d",&n2);

    soma = n1 + n2;

    printf("a soma dos dois valores da:%d",soma);

    return 0;
}