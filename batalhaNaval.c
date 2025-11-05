#include <stdio.h>

int main() {
    const int TAM = 10;
    int tabuleiro[TAM][TAM];

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    const int TAM_NAVIO = 3;
    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO] = {3, 3, 3};

    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 1;

    if (colunaH + TAM_NAVIO > TAM) {
        return 1;
    }

    if (linhaV + TAM_NAVIO > TAM) {
        return 1;
    }

    for(int i = 0; i < TAM_NAVIO; i++) {
        if(tabuleiro[linhaH][colunaH + i] == 3 || tabuleiro[linhaV + i][colunaV] == 3) {
            return 1;
        }
    }

    for(int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    for(int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

