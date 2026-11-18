
#include <stdio.h>

int main() {
    int numero;
    int i;

    FILE *arquivo;

    arquivo = fopen("numeros.txt", "w");

    for (i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");

    printf("\nNumeros armazenados no arquivo:\n");

    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

}
