/*09. Faça um programa que receba a altura de uma pessoa e imprima seu peso ideal. 
Fórmula do peso ideal: (72.7 ∗ altura) - 58.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float altura,pesoideal;
    printf("digite sua altura:\n");
    scanf("%f",&altura);

    pesoideal = (72.7*altura)-58;

    printf("peso ideal:%.2f",pesoideal);

    return 0;
}