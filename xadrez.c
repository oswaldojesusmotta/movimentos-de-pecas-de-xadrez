#include <stdio.h>

// Função recursiva para movimentar a Torre (para a Direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para movimentar a Rainha (para a Esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para movimentar o Bispo (Diagonal para Cima e Direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados para o Bispo (vertical e horizontal)
void moverBispoComLoops(int movimentosVerticais, int movimentosHorizontais) {
    for (int i = 1; i <= movimentosVerticais; i++) {
        for (int j = 1; j <= movimentosHorizontais; j++) {
            printf("Cima, Direita\n");
        }
    }
}

// Função com loops complexos para o Cavalo (2 para cima, 1 para direita)
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");

    for (int i = 0; i < movimentosVerticais + movimentosHorizontais; i++) {
        for (int j = 0; j <= i; j++) {
            if (i < movimentosVerticais) {
                printf("Cima\n");
                continue;
            }
            if (i == movimentosVerticais) {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(casasTorre);

    printf("\nMovimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Bispo com Recursividade (5 casas Diagonal):\n");
    moverBispoRecursivo(casasBispo);

    printf("\nMovimento do Bispo com Loops Aninhados (3 verticais x 2 horizontais):\n");
    moverBispoComLoops(3, 2);

    printf("\n");
    moverCavalo();

    return 0;
}
