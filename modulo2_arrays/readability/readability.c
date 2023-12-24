#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    float l = 0;                        // contador de letras
    string txt = get_string("Texto: "); // recebe a entrada

    // 1° passo: verificar se é ou não uma letra e contar o total de letras;

    // i percorre toda a entrada do usuário e verifica se é uma letra
    for (int i = 0, t = strlen(txt); i < t; i++)
    {
        if (isalpha(txt[i])) //
        {
            l++;
            // printf("Letras: %i\n", j);
        }
    }
    // printf("Letras: %2.f\n", l); // total de letras

    // 2° passo: quantidade de palavras: contando os espaços existentes e somar +1;

    float s = 0; // contabiliza os espaços

    for (int i = 0, t = strlen(txt); i < t; i++)
    {
        if (isspace(txt[i]))
        {
            s++;
            // printf("Espaços: %i\n", s);
        }
    }
    // printf("Espaços: %i\n", s);

    float p = s + 1; // contabiliza as palavras;
    // printf("Palavras: %2.f\n", p);

    // 4° passo: calcular a quantidade de sentenças usando ".", "!" e "?" para indicar o final de uma;

    float f = 0; // contabiliza as sentenças;

    for (int i = 0, t = strlen(txt); i < t; i++)
    {
        if (txt[i] == '.' || txt[i] == '!' || txt[i] == '?')
        {
            f++;
        }
    }
    // printf("Sentenças: %2.f\n", f);

    // 5° passo: pegar os valores e inserir na fórmula:

    // index = 0.0588 * L - 0.296 * S - 15.8
    // L: A média de letras por 100 palavras;
    // S: Média de sentenças por 100 palavras;

    double m_L = l / p * 100; // media de letras
    // printf("Média de letras: %2.f\n", m_L);

    double m_S = (f / p) * 100; // média de sentenças
    // printf("Média de sentenças: %2.f\n", m_S);

    float formula = 0.0588 * m_L - 0.295 * m_S - 15.8; // formula de Coleman-Liau
    // printf("Fórmula: %2.f\n", formula);

    // 6° passo: printar as grades de acordo com o resultado do cálculo

    // se o indice for menor que 1, imprima "Antes da Grade 1";
    // se for maior ou igual que 16, printe: Grade 16+

    if (formula <= 0)
    {
        printf("Before Grade 1\n");
    }
    else if (formula >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %2.f\n", formula);
    }
    
    return 0;
}
