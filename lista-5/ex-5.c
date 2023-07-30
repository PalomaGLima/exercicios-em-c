/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int anos, totalanos, meses, totalmeses, dias, total;

    printf("digite quantos anos vc tem:\n");
    scanf("%d", &anos);
    printf("digite quantos meses vc tem:\n");
    scanf("%d", &meses);
    printf("digite quantos dias vc tem:\n");
    scanf("%d", &dias);

    totalanos = anos * 365;
    totalmeses = meses * 30;
    total = dias + totalanos + totalmeses;

    printf("total de dias:%d\n", total);

    return 0;
}