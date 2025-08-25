#include <stdio.h>

int main() {
    // Simulação do movimento da TORRE usando FOR
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Simulação do movimento do BISPO usando WHILE
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // Simulação do movimento da RAINHA usando DO-WHILE
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
