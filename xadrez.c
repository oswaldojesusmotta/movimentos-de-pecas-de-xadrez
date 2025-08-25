#include <stdio.h>

int main() {
    // Movimento da Torre com FOR
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo com WHILE
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // Movimento da Rainha com DO-WHILE
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Movimento do Cavalo com loops aninhados
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    // Loop externo com FOR para movimentos verticais
    for (int i = 1; i <= movimentosVerticais; i++) {
        printf("Etapa %d: Baixo\n", i);

        // Loop interno com WHILE para movimento horizontal após o segundo passo
        if (i == movimentosVerticais) {
            int j = 1;
            while (j <= movimentosHorizontais) {
                printf("Etapa %d: Esquerda\n", movimentosVerticais + j);
                j++;
            }
        }
    }

    return 0;
}
