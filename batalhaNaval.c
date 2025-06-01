#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main()
{

    // Declaração das variáveis
    char colunas[10] = {'A', 'B', 'C', 'D','E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int i, j;

    // Icializaçãop do tabuleiro com zeros
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Valores 3 nos vetores que representam os navios
    int navio_h[3] = {3, 3, 3}; // Navio horizontal
    int navio_v[3] = {3, 3, 3}; // Navio vertical

    // Cordenadas iniciais dos navios
    int linha_h = 1, coluna_h = 5;
    int linha_v = 3, coluna_v = 2;

    // Posição do primeiro navio (navio_h = horizontal)
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_h][coluna_h + i] = navio_h[i];
    }

    // Posição do segundo navio (navio_v = vertical)
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_v + i][coluna_v] = navio_v[i];
    }

    // Cabeçalho do tabuleiro
    printf("TABULEIRO DE BATALHA NAVAL\n");
    printf("     ");
    for (j = 0; j < 10; j++)
    {
        printf("%c", colunas[j]);
        printf("  ");
    }
    printf("\n");

    // Exibição do tabuleiro com os navios posicionados
    for (int i = 0; i < 10; i++)
    {
        printf("%2d |", i);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("|\n");
    }
     printf("\n");
    return 0;
}
