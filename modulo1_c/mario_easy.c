// Recebe um número entre 1 e 8 referente a altura da pirâmide;

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Recebe uma altura do usuário entre 1 e 8;
    int h;
    do
    {
        h = get_int("Altura: ");
    }
    while (h < 1 || h > 8);

    // acrescenta uma quebra de linha até que atinja a altura
    for (int i = 0; i <= h; i++)
    {
        // acrescenta uma # de acordo com a quantidade de quebra de linha
        for (int b = 0; b < i; b++)
        {
            printf("#");
        }

        printf("\n");

        // insere os * de acordo com a quantidade de # em cada linha
        for (int j = h - 1; j > i; j--)
        {
            printf(" ");
        }
    }
}
