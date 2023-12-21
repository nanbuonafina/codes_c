// Calcula quanto tempo leva para uma população atingir um determinado tamanho;

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Solicite o valor inicial ao usuário

    int n;
    do
    {
        n = get_int("Informe a quantidade inicial: ");
    }
    while (n < 9);

    // TODO: Solicite o valor final ao usuário

    int o;
    do
    {
        o = get_int("Informe a quantidade final: ");
    }
    while (o < n);

    // TODO: Calcule o número de anos até o limite
    int contador = 0;

    while (n < o) // enquanto o valor inicial for menor que o final, a operação será executada;
    {
        n = n + (n / 3) - (n / 4); // soma o valor inicial ao resultado da subtração
        contador++;                // cada vez que o loop é executado, se passa um ano
    }

    // TODO: Imprima o número de anos
    printf("Years: %i\n", contador);
}
