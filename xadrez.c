#include <stdio.h>

int main() {
    int bispo_x = 2, bispo_y = 2; // Posição inicial do Bispo
    int torre_x = 4, torre_y = 1; // Posição inicial da Torre
    int rainha_x = 6, rainha_y = 6; // Posição inicial da Rainha

    printf("Posições iniciais:\n");
    printf("Bispo: (%d, %d)\n", bispo_x, bispo_y);
    printf("Torre: (%d, %d)\n", torre_x, torre_y);
    printf("Rainha: (%d, %d)\n\n", rainha_x, rainha_y);

    // Movimento do Bispo (5 casas na diagonal superior direita)
    for (int i = 0; i < 5; i++) {
        bispo_x++;
        bispo_y++;
    }

    // Movimento da Torre (5 casas para a direita)
    for (int i = 0; i < 5; i++) {
        torre_y++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    for (int i = 0; i < 8; i++) {
        rainha_y--;
    }

    printf("Posições finais após o movimento:\n");
    printf("Bispo: (%d, %d)\n", bispo_x, bispo_y);
    printf("Torre: (%d, %d)\n", torre_x, torre_y);
    printf("Rainha: (%d, %d)\n", rainha_x, rainha_y);

    return 0;
}