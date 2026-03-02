#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[10][10] = {0};
    
    int tamanho_do_navio = 3;
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // coordenadas iniciais

    int horizontal_linha = 2, horizontal_coluna = 1;
    int vertical_linha = 5, vertical_coluna = 6;
    
    printf ("Posicionando o Navio horizontal.\n");

    for (int i = 0; i < tamanho_do_navio; i++) {
        tabuleiro[horizontal_linha][horizontal_coluna + i] = navio_horizontal[i];
        printf("Parte %d em: [%d][%d]\n", i + 1, horizontal_linha, horizontal_coluna + i);
    }

    printf ("Posicionando o Navio vertical.\n");

    for (int i = 0; i < tamanho_do_navio; i++) {
        tabuleiro[vertical_linha + i][vertical_coluna] = navio_vertical[i];
        printf("Parte %d em: [%d][%d]\n", i + 1, vertical_linha + i, vertical_coluna);
    }

    for ( int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf ("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}