#include <stdio.h>

int main() {

    int cinema[3][4] = {
        {0, 1, 0, 0}, 
    };

    int disponiveis = 0;
    int ocupados = 0;

    printf("=== Mapa dos Assentos ===\n");
    printf("          TELA\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[%d-%d: %d]  ", i + 1, j + 1, cinema[i][j]);

            if (cinema[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
        printf("\n");
    }

    printf("\n=== Resultado ===\n");
    printf("Assentos disponiveis: %d\n", disponiveis);
    printf("Assentos ocupados:    %d\n", ocupados);

    return 0;
}