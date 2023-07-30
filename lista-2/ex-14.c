/*14. Faça um programa que receba um número e imprima sua raiz quadrada, se possível.
Caso não seja possível, apresente a mensagem “não é possível“.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, raiz;

    printf("Digite um numero: ");
    scanf("%f", &num);

    raiz = sqrt(num);

    if (raiz == floor(raiz) && raiz == ceil(raiz))
    {
        printf("%.0f e raiz exata.\n", raiz);
    }
    else
    {
        printf("%.2f nao e raiz exata.\n", raiz);
    }

    return 0;
}