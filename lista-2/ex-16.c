/*16. Faça um programa que receba o valor de x e imprima o valor de f(x) com base na função abaixo: */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x;

    printf("digite o valor de x:\n");
    scanf("%f", &x);

    if (x <= 1)
    {
        printf("1");
    }
    else if (x > 1 && x <= 2)
    {
        printf("2");
    }
    else if (x > 2 && x <= 3)
    {
        x = x * x;
        printf("%.2f", x);
    }
    else if (x > 3)
    {
        x = x * x * x;
        printf("%.2f", x);
    }

    return 0;
}