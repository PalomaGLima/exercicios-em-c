/*Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere
que as idades dos homens serão sempre diferentes entre si, bem como as das
mulheres). Calcule e escreva a soma das idades do homem mais velho com a
mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int h1, h2, m1, m2, oldh, youh, oldm, youm, soma, produto;
    do
    {
        printf("digite a idade de dois homens\n");
        scanf("%d %d", &h1, &h2);
    } while (h1 == h2);

    do
    {
        printf("digite a idade de duas mulheres\n");
        scanf("%d %d", &m1, &m2);
    } while (m1 == m2);

    if (h1 > h2)
    {
        oldh = h1;
    }
    else
    {
        oldh = h2;
    }
    if (h1 < h2)
    {
        youh = h1;
    }
    else
    {
        youh = h2;
    }

    if (m1 > m2)
    {
        oldm = m1;
    }
    else
    {
        oldm = m2;
    }
    if (m1 < m2)
    {
        youm = m1;
    }
    else
    {
        youm = m2;
    }

    soma = oldh + youm;
    produto = oldm * youh;

    printf("soma das idades:%d\n", soma);
    printf("produto das idades:%d\n", produto);

    system("PAUSE");
    return 0;
}