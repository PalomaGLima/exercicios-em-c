/*04. Faça um programa que peça 3 notas de avaliações e imprima a média aritmética 
simples dessas notas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,media;
    printf("digite sua nota:\n");
    scanf("%f", &n1);

    printf("digite sua nota:\n");
    scanf("%f", &n2);

    printf("digite sua nota:\n");
    scanf("%f", &n3);

    media= (n1 + n2 + n3)/3;

    printf("a sua media e:%.2f",media);

    return 0;
}