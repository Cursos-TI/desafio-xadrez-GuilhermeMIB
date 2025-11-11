#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita usando for
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando while
    int movimentoBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");

    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando do-while
    int movimentoRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo: movimenta para baixo
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");

        // Loop interno: após o segundo movimento para baixo, move para a esquerda
        int j = 0;
        while (j < casasEsquerda && i == casasBaixo - 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}