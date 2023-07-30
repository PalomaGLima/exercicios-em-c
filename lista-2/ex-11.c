/*11. Faça um programa que receba três números e imprima-os em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;

    printf("digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > c)
    {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c)
    {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("%d %d %d", a, b, c);

    return 0;
}