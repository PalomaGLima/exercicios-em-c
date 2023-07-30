/*8. Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$
1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu
salário total.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariof, vendas;

    printf("digite salario fixo:\n");
    scanf("%f", &salariof);
    printf("valor das vendas:\n");
    scanf("%f", &vendas);

    if (vendas > 0 && vendas <= 1500)
    {
        printf("salariot:%.2f\n", salariof + vendas / 100 * 3);
    }
    else if (vendas > 1500)
    {
        printf("salario total;%.2f\n", salariof + vendas / 100 * 5);
    }
    else
    {
        printf("salario total:%.2f\n", salariof + vendas);
    }
    system("PAUSE");
    return 0;
}