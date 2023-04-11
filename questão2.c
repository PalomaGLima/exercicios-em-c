/*02. Faça um programa que recebe um número e então imprima: “O número informado foi.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float n;
    printf("digite um numero:\n");
    scanf("%f", &n);

    printf("o numero informado foi:%.2f",n);

    return 0;
}