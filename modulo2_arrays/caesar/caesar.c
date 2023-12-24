#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // 1° passo: verificar as linhas de comando;

    // verifica se recebe mais de um comando
    if (argc != 2) // verifica se recebeu mais de um comando
    {
        printf("Use: ./code key\n");
        return 1;
    }

    for (int i = 0, t = strlen(argv[1]); i < t; i++)
    {
        if (isdigit(argv[1][i]) ==  false)
        {
            printf("Use: ./code key\n");
            return 1;
        }
    }

    // printf("Key: %s\n", argv[1]);

    // 2° passo: transformar a entrada str para int;
    int key = atoi(argv[1]); // atoi é uma função da biblioteca stdlib que converte str em int;

    // printf("%i\n", key);

    // 3° passo: solicitar o texto a ser cifrado;

    string txt = get_string("Plaintext: ");

    // 4° passo: converter e codificar;
    // index ASCII -> A = 0, B = 1, C = 2... (caractere maiúsculo - 65/ minúsculo - 97);
    // converte para o index, depois embaralha, mantém o loop do alfabeto e converte para a letra;

    printf("Criptografado: \n");

    for (int i = 0, t = strlen(txt); i < t; i++) // i percorre toda a array;
    {
        if (isupper(txt[i])) // se o caracterer for maiúsculo:
        {
            printf("%c", (((txt[i] - 65) + key) % 26) + 65); // index -> embaralhamento -> loop -> maiúsculo inalterado;
        }
        else if (islower(txt[i])) // se o caractere for minúsculo
        {
            printf("%c", (((txt[i] - 97) + key) % 26) + 97); // index -> embaralhamento -> loop -> minúsculo inalterado
        }
        else
        {
            printf("%c", txt[i]); // se for alguma pontuação, apenas repete
        }
    }
    printf("\n");
    
    return 0;
}
