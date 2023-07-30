/*15. Faça um programa que receba a idade de uma pessoa e imprima sua classe eleitoral
(facultativo, obrigatório ou não-eleitor).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("digite sua idade:\n");
    scanf("%d", &n);

    if (n >= 18 && n < 70)
    {
        printf("obrigatorio");
    }
    else if (n >= 16 && n < 18 || n >= 70)
    {
        printf("falcultativo");
    }
    else
        printf("nao eleitor");

    return 0;
}