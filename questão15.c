/*15. Faça um programa que pergunte a quantidade de quilômetros percorridos por um 
carro alugado e a quantidade de dias do aluguel. Calcule o preço do aluguel, levando 
em consideração que o aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por 
quilometro rodado*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    float km,dias,total;
    printf("quantos km percorrido:\n");
    scanf("%f",&km);

    printf("quantos dias alugados:\n");
    scanf("%f",&dias);

    total= (dias*60)+(km*0.15);

    printf("aluguel:%.2f\n",total);

    return 0;
}