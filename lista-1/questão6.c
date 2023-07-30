/*06. Faça um programa que receba o raio de um círculo, calcule e imprima a área deste 
círculo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float raio,area;
    printf("digite o raio do seu circulo:\n");
    scanf("%f",&raio);

    area = 3.14 *(raio*raio);

    printf("a area do circulo e:%.2f",area);

    return 0;
}