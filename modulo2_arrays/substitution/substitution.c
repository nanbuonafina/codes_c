#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // 1° passo: verificar se as linhas de comando recebem apenas 1 argumento, apenas 26 letras e não há repetições;

    if (argc != 2 || strlen(argv[1]) != 26) //  checa se recebe apenas 1 argumento;
    {
        printf("A chave deve conter um argumento de 26 letras!\n");
        return 1;
    }

    for (int i = 0, t = strlen(argv[1]); i < t; i++) // checa todos os caracteres da array;
    {
        if (!isalpha(argv[1][i])) // se houver algum caractere que não é alfabético
        {
            printf("A chave deve conter apenas letras!\n");
            return 3;
        }

        for (int j = i + 1; j < strlen(argv[1]); j++) // j checa todos os caracteres que vem depois do i
        {
            if (argv[1][i] == argv[1][j]) // se i for igual a algum outro char encontrado por j, erro
            {
                printf("A chave não pode conter letras repetidas!\n");
                return 4;
            }
        }
    }

    // transformar a entrada em letras maiúsculas:
    for (int i = 0, t = strlen(argv[1]); i < t; i++)
    {
        if (islower(argv[1][i]))
        {
            argv[1][i] = toupper(argv[1][i]);
            // printf("%c", argv[1][i]);
        }
        else if (isupper(argv[1][i]))
        {
            argv[1][i] = argv[1][i];
            // printf("%c", argv[1][i]);
        }
    }
    // printf("%s", argv[1]);
    // printf("\n");

    string key = argv[1]; // converti em string pois é mais fácil de trabalhar

    // 2° passo: solicitar o texto simples:
    string plaintext = get_string("Plaintext: ");
    int len_text = strlen(plaintext);

    for (int i = 0; i < len_text; i++) // verifica todos os caracteres do texto simples
    {
        if (isupper(plaintext[i])) // se for maiísculo
        {
            // o indice calcula a posição do numero em relação ao inicial
            int indice = (plaintext[i] - 65);
            // printf("%i\n", indice);
            plaintext[i] = toupper(key[indice]); // o texto simples recebe o char que ta na posição indicada pelo indice;
        }
        else if (islower(plaintext[i])) // se for minúsculo
        {
            int indice = plaintext[i] - 97; // calcula a posição
            // printf("%i\n", indice);
            plaintext[i] = tolower(key[indice]); // pega o char localizando com base na posição da subtração;
        }
    }

    printf("Cipher: %s\n", plaintext);

    return 0;
}
