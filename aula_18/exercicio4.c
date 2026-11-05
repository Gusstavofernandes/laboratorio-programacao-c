#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int qtdInicial, qtdFinal;

    printf("===== CONTROLE DE ESTOQUE =====\n");
    printf("Quantidade inicial: ");
    scanf("%d", &qtdInicial);

    qtdFinal = dobro(qtdInicial);

    printf("Quantidade inicial: %d\n", qtdInicial);
    printf("Quantidade apos duplicacao: %d\n", qtdFinal);

    return 0;
}