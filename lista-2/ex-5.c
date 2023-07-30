/*05. Faça um programa que receba dois números e efetue a soma deles. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso
o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, soma = 0, mais = 0, menos = 0;

    printf("digite um numero:\n");
    scanf("%f%f", &n1, &n2);

    soma = n1 + n2;
    printf("soma:%.2f\n", soma);

    if (soma > 20)
    {
        mais = soma + 8;
        printf("O resultado e:%.2f\n", mais);
    }
    else if (soma <= 20)
    {
        menos = soma - 5;
        printf("O resultado e:%.2f\n", menos);
    }

    return 0;
}