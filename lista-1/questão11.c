/*11. Faça um programa que receba 2 números inteiros e um número real. Calcule e 
imprima: i) o produto do dobro do primeiro com a metade do segundo; ii) a soma do 
triplo do primeiro com o terceiro; iii) o terceiro elevado ao cubo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int n1,n2;
    float n3,i,ii,iii;
    printf("digite um numero:\n");
    scanf("%d",&n1);
    
    printf("digite um numero:\n");
    scanf("%d",&n2);

    printf("digite um numero:\n");
    scanf("%f",&n3);

    i= (n1*2) * (n2/2);
    ii= (n1*3) + n3;
    iii= (n3*n3*n3);


    printf("i:%.2f\n",i);
    printf("ii:%.2f\n",ii);
    printf("iii:%.2f\n",iii);

    return 0;
}