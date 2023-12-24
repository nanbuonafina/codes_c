#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // pega a entrada do usuário e verifica se é maior que zero
    float troco;
    do
    {
        troco = get_float("Informe o troco: ");
    }
    while (troco <= 0);

    // multiplica o troco por 100 para retirar das casas decimais e facilitar o cálculo
    float resultado = troco * 100;
    printf("O troco a ser dado é: %2.f\n", resultado);

    // variável que irá contabilizar quantas vezes o loop foi executado
    int contador = 0;

    // enquanto o troco for maior que zero, as moedas serão distribuídas
    do
    {
        if (resultado >= 25) // se for maior ou igual a 25
        {
            printf("25 centavos\n");
            resultado = resultado - 25;
            printf("Faltam: %2.f\n", resultado);
        }

        else if (resultado < 25 && resultado >= 10) // se for menor que 25 ou maior igual a 10
        {
            printf("10 centavos\n");
            resultado = resultado - 10;
            printf("Faltam: %2.f\n", resultado);
        }

        else if (resultado < 10 && resultado >= 5) // se for menor que 10 ou maior igual a 5
        {
            printf("5 centavos\n");
            resultado = resultado - 5;
            printf("Faltam: %2.f\n", resultado);
        }
        else if (resultado < 5 && resultado >= 1)
        {
            printf("1 centavo\n");
            resultado = resultado - 1;
            printf("Faltam: %2.f\n", resultado);
        }

        contador++; // cada vez que o loop é executado, uma moeda é usada
    }
    while (resultado > 0);
    printf("Quantidade de modeas: %i\n", contador);
}
