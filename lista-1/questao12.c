/*12. Faça um programa que receba o número total de eleitores de um município, número 
de votos brancos, nulos e válidos. Calcule e imprima o percentual que cada um 
representa em relação ao total de eleitores.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    float eleito, whitevote, nulo, vale;

    printf("numero de eleitores:\n");
    scanf("%f", &eleito);
    printf("numero de votos brancos:\n");
    scanf("%f", &whitevote);
    printf("numero de nulos:\n");
    scanf("%f", &nulo);
    printf("numero de validos:\n");
    scanf("%f", &vale);

    if (eleito == whitevote + nulo + vale)
    {
        printf("percentual:%.1f%%\n", whitevote/eleito*100);
        printf("percentual:%.1f%%\n", nulo/eleito*100);
        printf("percentual:%.1f%%\n", vale/eleito*100);
    }
    else{
        printf("valores dados nao corresponde ao total de eleitores\n");
    }
    return 0;
}