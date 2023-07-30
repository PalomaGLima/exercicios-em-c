/*10. Faça um programa que pergunte quanto você ganha por mês. Calcule e imprima: i) 
Salário bruto; ii) Quanto pagou de imposto (8%); iii) Quanto pagou ao sindicato (5%); 
iv) Salário líquido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float salab,imposto,sindicato,salal;
    printf("quanto vc ganha por mes:\n");
    scanf("%f",&salab);

    imposto= (salab*8)/100;
    sindicato= (salab*5)/100;
    salal= salab-imposto-sindicato;


    printf("salario bruto:%.2f\n",salab);
    printf("sindicato:%.2f\n",sindicato);
    printf("imposto:%.2f\n",imposto);
    printf("salario liquido:%.2f\n",salal);

    return 0;
}