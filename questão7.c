/*07. Faça um programa que receba o lado de um quadro, calcule a área de um quadrado e 
imprima o dobro desta área.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float lado,area,dobro;
    printf("digite o lado do quadro:\n");
    scanf("%f",&lado);

    area = lado*lado;
    dobro = area*area;

    printf("dobro da area:%.2f",dobro);

    return 0;
}