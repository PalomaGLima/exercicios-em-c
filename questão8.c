/*08. Faça um programa que pergunte o quanto você ganha por hora e o número de horas 
trabalhadas no mês. Calcule e imprima o seu salário neste mês.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float ganhah,horast,salario;
    printf("quanto vc ganha por hora:\n");
    scanf("%f",&ganhah);

    printf("numero de horas que vc trabalha:\n");
    scanf("%f",&horast);

    salario = ganhah*horast;

    printf("seu salario e:%.2f",salario);

    return 0;
}