#include <stdio.h>
#include <stdlib.h>

#define N 10   // tamanho do tabuleiro
#define M 7    // tamanho das matrizes de habilidade (ímpar para centralizar)


void inicializarTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = 0; // água
        }
    }
    
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[7][8] = 3;
}


void exibirTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("~ "); // água
            } else if (tabuleiro[i][j] == 3) {
                printf("N "); // navio
            } else if (tabuleiro[i][j] == 5) {
                printf("* "); // habilidade
            }
        }
        printf("\n");
    }
    printf("\n");
}


void gerarCone(int matriz[M][M]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            matriz[i][j] = 0;
        }
    }
    int centro = M / 2;
    for (int i = 0; i < M; i++) {
        for (int j = centro - i; j <= centro + i; j++) {
            if (j >= 0 && j < M) {
                matriz[i][j] = 1;
            }
        }
    }
}


void gerarCruz(int matriz[M][M]) {
    int centro = M / 2;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            if (i == centro || j == centro) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}


void gerarOctaedro(int matriz[M][M]) {
    int centro = M / 2;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}


void aplicarHabilidade(int tabuleiro[N][N], int habilidade[M][M], int origemX, int origemY) {
    int centro = M / 2;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            if (habilidade[i][j] == 1) {
                int x = origemX + (i - centro);
                int y = origemY + (j - centro);
                
                
                if (x >= 0 && x < N && y >= 0 && y < N) {
                    if (tabuleiro[x][y] == 0) {
                        tabuleiro[x][y] = 5; 
                    }
                }
            }
        }
    }
}

int main() {
    int tabuleiro[N][N];
    int cone[M][M], cruz[M][M], octaedro[M][M];

    inicializarTabuleiro(tabuleiro);

   
    gerarCone(cone);
    gerarCruz(cruz);
    gerarOctaedro(octaedro);

    printf("Tabuleiro inicial:\n");
    exibirTabuleiro(tabuleiro);

    
    aplicarHabilidade(tabuleiro, cone, 1, 5);       
    aplicarHabilidade(tabuleiro, cruz, 5, 5);       
    aplicarHabilidade(tabuleiro, octaedro, 8, 2);   

    printf("Tabuleiro com habilidades aplicadas:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
