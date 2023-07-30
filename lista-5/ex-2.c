// 2. Dado um número inteiro, exibir seu sucessor e antecessor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ant, suc;

    printf("digite um numero\n");
    scanf("%d", &n);

    ant = n - 1;
    suc = n + 1;

    printf("antecessor e sucessor %d e %d\n", ant, suc);

    return 0;
}