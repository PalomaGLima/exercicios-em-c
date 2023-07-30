/*07. Faça um programa que receba um número e imprima a mensagem: “é múltiplo de 3”
ou “não é múltiplo de 3”.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("digite um numero:\n");
    scanf("%d", &n);

    if (n % 3 == 0)
    {
        printf("E multiplo de 3");
    }
    else
        printf("Nao e multiplo de 3");

    return 0;
}