#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
//int points = POINTS[0];

// antes era int
int compute_score1(string word1);
int compute_score2(string word2);
int pontos1 = 0;
int pontos2 = 0;

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    // Score both words
    int score1 = compute_score1(word1);
    int score2 = compute_score2(word2);

    // TODO: Print the winner

    if (score1 == score2)
    {
        printf("Tie!\n");
    }
    else if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}
// antes era int
int compute_score1(string word1)
{
    // TODO: Compute and return score for string
    int len_w1 = strlen(word1);

    // score word 1:

    for (int i = 0; i < len_w1; i++)
    {
        if (isupper(word1[i]))
        {
            int indice = word1[i] - 65;
            pontos1 += (POINTS[indice]);
        }
        else if (islower(word1[i]))
        {
            int indice = word1[i] - 97;
            pontos1 += (POINTS[indice]);
        }
    }
    //printf("Pontuação do Jogador 1: %i\n", pontos1);
    return pontos1;
}

    // scores word 2:

int compute_score2(string word2)
{
    int len_w2 = strlen(word2);

    for (int i = 0; i < len_w2; i++)
    {
        if (isupper(word2[i]))
        {
            int indice = word2[i] - 65;
            pontos2 += (POINTS[indice]);
        }
        else if (islower(word2[i]))
        {
            int indice = word2[i] - 97;
            pontos2 += (POINTS[indice]);
        }
    }
    //printf("Pontuação do Jogador 2: %i\n", pontos2);
    return pontos2;
}
