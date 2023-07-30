/*14. Faça um programa que receba uma quantidade de dias, horas, minutos e segundos. 
Calcule e imprima o total em segundos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float dias,horas,minutos,segundos,total,ds,hs,ms;

    printf("dias:\n");
    scanf("%f",&dias);

    printf("horas:\n");
    scanf("%f",&horas);

    printf("minutos:\n");
    scanf("%f",&minutos);

    printf("segundos:\n");
    scanf("%f",&segundos);

    ds = dias*24*60*60;
    hs = horas*60*60;
    ms = minutos*60;

    total = segundos+ds+hs+ms;


    printf("total de segundos:%.2f\n",total);

    return 0;
}