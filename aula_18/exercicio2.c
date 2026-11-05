#include <stdio.h>

float maiorPreco(float p1, float p2) {
    if (p1 > p2) {
        return p1;
    } else {
        return p2;
    }
}

int main(void) {
    float preco1, preco2;

    printf("===== COMPARADOR DE PRECOS =====\n");
    printf("Preco 1: ");
    scanf("%f", &preco1);
    printf("Preco 2: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        float maior = maiorPreco(preco1, preco2);
        printf("Maior preco: R$ %.2f\n", maior);
    }

    return 0;
}