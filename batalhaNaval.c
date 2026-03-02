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
    int navio_diagonal1[3] = {3, 3, 3};
    int navio_diagonal2[3] = {3, 3, 3};

    // coordenadas iniciais

    int horizontal_linha = 2, horizontal_coluna = 1;
    int vertical_linha = 5, vertical_coluna = 6;
    int diagonal1_linha = 0, diagonal1_coluna = 4;
    int diagonal2_linha = 7, diagonal2_coluna = 2;

    // matrizes de habilidade
    
    int cone[5][5] = {0}, cruz[5][5] = {0}, octaedro[5][5] = {0};
    
    // posicionando os navios

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

    printf ("Posicionando o primerio navio diagonal.\n");

    for (int i = 0; i < tamanho_do_navio; i++) {
        tabuleiro[diagonal1_linha + i][diagonal1_coluna + i] = navio_diagonal1[i];
        printf("Parte %d em: [%d][%d]\n", i + 1, diagonal1_linha + i, diagonal1_coluna + i);
    }

    printf ("Posicionando o segundo navio diagonal.\n");

    for (int i = 0; i < tamanho_do_navio; i++) {
        tabuleiro[diagonal2_linha + i][diagonal2_coluna - i] = navio_diagonal2[i];
        printf("Parte %d em: [%d][%d]\n", i + 1, diagonal2_linha + i, diagonal2_coluna - i);
    }

    printf("\n\n");

    // Nível Mestre - Habilidades Especiais com Matrizes

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Cone:
            if ((i == 0 && j == 2) || (i == 1 && j >= 1 && j <= 3) || (i == 2)) cone[i][j] = 1;
            
            // Cruz:
            if (i == 2 || j == 2) cruz[i][j] = 1;
            
            // Octaedro:
            if ((i == 1 && j == 2) || (i == 2 && j >= 1 && j <= 3) || (i == 3 && j == 2)) octaedro[i][j] = 1;
        }
    }

    // Exibindo individualmente as matrizes de habilidade
    
    printf("Exemplo de saida de habilidade em cone:\n");
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 5; j++) printf("%d ", cone[i][j]);
        printf("\n");
    }

    printf("\nExemplo de saida de habilidade em cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", cruz[i][j]);
        printf("\n");
    }

    printf("\nExemplo de saida de habilidade em octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", octaedro[i][j]);
        printf("\n");
    }

    printf("\n\n");

    // sobrepondo as habilidades no tabuleiro

    int origem_cone_linha = 0,    origem_cone_coluna = 0;
    int origem_cruz_linha = 0,    origem_cruz_coluna = 5;
    int origem_octaedro_linha = 5, origem_octaedro_coluna = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) { 
            // Habilidade Cone
            if (cone[i][j] == 1) {
                tabuleiro[origem_cone_linha + i][origem_cone_coluna + j] = 5;
            }

            // Habilidade Cruz
            if (cruz[i][j] == 1) {
                tabuleiro[origem_cruz_linha + i][origem_cruz_coluna + j] = 5;
            }

            // Habilidade Octaedro
            if (octaedro[i][j] == 1) {
                tabuleiro[origem_octaedro_linha + i][origem_octaedro_coluna + j] = 5;
            }
        }
    }

    // tabuleiro

    for ( int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf ("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}