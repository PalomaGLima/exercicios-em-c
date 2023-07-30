/*13. Faça um programa que receba o salário mensal atual de um funcionário e o percentual 
de reajuste. Calcule e imprima o valor do novo salário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float mensal,percentual,reajuste,salariof;

    printf("quanto vc ganha por mes:\n");
    scanf("%f",&mensal);

    printf("qual o percentual de reajuste:\n");
    scanf("%f",&percentual);

    reajuste= (mensal*percentual)/100;
    salariof= reajuste+mensal;

    printf("valor do novo salario:%.2f",salariof);
    

    return 0;
}