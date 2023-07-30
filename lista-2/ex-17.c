/*17. Faça um programa que receba um inteiro entre 1 e 7. Imprima o dia da semana correspondente (1 sendo Domingo e 7 sendo Sábado). Caso o número recebido não seja dentro do intervalo, imprima que o dia da semana não existe.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dia;

    printf("digite um numero de um a sete:\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("domingo");
        break;
    case 2:
        printf("segunda");
        break;
    case 3:
        printf("terça");
        break;
    case 4:
        printf("quarta");
        break;
    case 5:
        printf("quinta");
        break;
    case 6:
        printf("sexta");
        break;
    case 7:
        printf("sabado");
        break;

    default:
        printf("o dia da semana não existe");
        break;
    }

    return 0;
}