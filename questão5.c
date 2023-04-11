/*05. Faça um programa que receba alguma medição em metros e imprima a conversão 
para centímetros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float m,conver;
    printf("tamanho em metros:\n");
    scanf("%f",&m);

    conver = m * 100;

    printf("o tamanho em cm e:%.2f",conver);

    return 0;
}