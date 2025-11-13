#include <stdio.h>

// Função recursiva para movimentar a Torre para a direita
// Cada chamada representa uma casa movida
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo na diagonal (cima + direita)
// Cada chamada representa uma casa diagonal
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função que combina recursividade e loops aninhados para o Bispo
// Loop externo: movimento vertical (cima)
// Loop interno: movimento horizontal (direita)
void moverBispoComRecursaoELoops(int linhas, int colunas) {
    if (linhas <= 0) return;
    printf("Cima\n");
    for (int j = 0; j < colunas; j++) {
        printf("Direita\n");
    }
    moverBispoComRecursaoELoops(linhas - 1, colunas);
}

// Função recursiva para movimentar a Rainha para a esquerda
// Cada chamada representa uma casa movida
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função com loops aninhados e múltiplas condições para o Cavalo
// Simula o movimento em "L": duas casas para cima e uma para a direita
void moverCavalo(int maxLinha, int maxColuna) {
    for (int i = 0; i < maxLinha; i++) {
        for (int j = 0; j < maxColuna; j++) {
            // Condição para simular o movimento em "L"
            if ((i + 2 < maxLinha) && (j + 1 < maxColuna)) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // encerra após o primeiro movimento válido
            }
            if (i == j) continue; // ignora posições diagonais
        }
    }
}

int main() {
    // Movimento da Torre: 5 casas para a direita
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (recursivo)
    int movimentoBispo = 5;
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(movimentoBispo);
    printf("\n");

    // Movimento do Bispo com recursividade e loops aninhados
    int linhasBispo = 2;
    int colunasBispo = 2;
    printf("Movimento do Bispo (Recursão + Loops):\n");
    moverBispoComRecursaoELoops(linhasBispo, colunasBispo);
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    int movimentoRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(movimentoRainha);
    printf("\n");

    // Movimento do Cavalo: 2 casas para cima e 1 para a direita
    int casasCima = 3;
    int casasDireita = 2;
    printf("Movimento do Cavalo:\n");
    moverCavalo(casasCima, casasDireita);
    printf("\n");

    return 0;
}