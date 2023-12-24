#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // solicita a altura pro usuário e verifica se é de 1 a 8 (incluso)
    int h;
    do
    h = get_int("Informe a altura: ");
    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++) // constrói as colunas
    {
        for (int j = 0; j < h; j++) // constrói as linhas
        {
            if (h - i - 2 < j) // formula da piramide
            {
                printf("#"); // se j for maior que o resultado da subtração, imprime #
            }
            else
            {
                printf(" "); // se a subtração for maior que j, imprime um espaço
            }
        }

        printf("  "); //  espaço entre as colunas

        for (int k = -1; k < i; k++) // define a quantidade de caracteres na linha
        {
            if (k <= h) // imprime # se a linha for menor ou igual a altura
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
