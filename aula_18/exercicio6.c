#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n");
    do {
        printf("Digite um numero (entre 0 e 12): ");
        scanf("%d", &numero);
        if (numero < 0 || numero > 12) {
            printf("Valor invalido! Informe um numero entre 0 e 12.\n");
        }
    } while (numero < 0 || numero > 12);

    int resultado = calcularFatorial(numero);
    printf("Fatorial de %d = %d\n", numero, resultado);

    return 0;
}