/*06. Faça um programa que receba um número. Caso o número seja positivo, imprima sua
raiz; caso contrário, imprima seu quadrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float n, raiz = 0, quadrado = 0;

    printf("digite um numero:\n");
    scanf("%f", &n);

    if (n > 0)
    {
        raiz = sqrt(n);
        printf("A raiz quadrada de %.2f e %.2f", n, raiz);
    }

    else

        quadrado = n * n;
    printf("O quadrado de %.2f e %.2f", n, quadrado);

    return 0;
}