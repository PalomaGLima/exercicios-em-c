/*02- Faça um programa que receba dois números. Calcule a soma dos dois números. Caso a
soma seja maior que 10, imprima o resultado da soma.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, soma = 0;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    printf("Digite um numero:\n");
    scanf("%f", &n2);

    soma = n1 + n2;

    if (soma > 10)
    {
        printf("Resultado da soma:\n%.0f", soma);
    }

    return 0;
}