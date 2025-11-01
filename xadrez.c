#include <stdio.h>

// ==== Funções recursivas ====

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return; // Condição de parada
    printf(" Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return; // Condição de parada
    for (int i = 0; i < horizontal; i++) {
        printf(" Cima, Direita\n");
    }
    moverBispo(vertical - 1, horizontal); // Repete o padrão diagonal
}

// Função recursiva para o movimento da Rainha;
void moverRainha(int casas) {
    if (casas == 0) return;
    printf(" Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorre(5); // Torre move 5 casas para a direita;

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(3, 2); // Bispo faz 3 movimentos diagonais (2 passos por vez);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(8); // Rainha move 8 casas para a esquerda;

    // ==== Movimento do Cavalo ====;
    //Loops aninhados e tabém controle de fluxo;
    printf("\n=== Movimento do Cavalo ===\n");
    int movimentos = 1; // Quantas vezes o cavalo repete o movimento;

    while ( movimentos--) {
        for (int cima = 0; cima < 2; cima++) { // Move duas casas para cima;
            printf(" Cima\n");
        }

        for (int direita = 0; direita < 1; direita++) { // Move uma casa para a direita;
            printf(" Direita\n");
        }

        // Exemplo de controle de fluxo;
        if ( movimentos < 0) {
            printf(" Movimento completo!\n\n");
            break; // Interrompe o laço se não houver mais movimentos;
        }
    }

    return 0;
}
