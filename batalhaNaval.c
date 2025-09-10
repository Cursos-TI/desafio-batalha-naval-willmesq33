#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    int i, j;

    // Inicializa o tabuleiro com água (0) 
    for (i = 0; i < TAM_TABULEIRO; i++) {
        for (j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    //  Coordenadas iniciais dos navios 
    // Navio horizontal
    int linhaH = 2; // linha inicial
    int colunaH = 4; // coluna inicial

    // Navio vertical
    int linhaV = 5; // linha inicial
    int colunaV = 1; // coluna inicial

    //  Posiciona navio horizontal 
    for (j = 0; j < TAM_NAVIO; j++) {
        tabuleiro[linhaH][colunaH + j] = NAVIO;
    }

    //  Posiciona navio vertical 
    for (i = 0; i < TAM_NAVIO; i++) {
        // Garante que não sobrepõe outro navio
        if (tabuleiro[linhaV + i][colunaV] == AGUA) {
            tabuleiro[linhaV + i][colunaV] = NAVIO;
        }
    }

    // Exibe o tabuleiro 
    printf("Tabuleiro Batalha Naval \n");
    
        printf("\n");
    for (i = 0; i < TAM_TABULEIRO; i++) {
        for (j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
