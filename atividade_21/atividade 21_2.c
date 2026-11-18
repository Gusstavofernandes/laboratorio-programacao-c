
#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    Funcionario funcionario;
    int i;

    FILE *arquivo;

    arquivo = fopen("funcionarios.txt", "a");

    for (i = 0; i < 5; i++) {
        printf("\nCadastro do funcionario %d\n", i + 1);

        printf("Digite o nome: ");
        scanf(" %[^\n]", funcionario.nome);

        printf("Digite o salario: ");
        scanf("%f", &funcionario.salario);

        printf("Digite as horas extras: ");
        scanf("%d", &funcionario.horasExtras);

        fprintf(arquivo, "Nome: %s | Salario: %.2f | Horas Extras: %d\n",
                funcionario.nome, funcionario.salario, funcionario.horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");

    printf("\nFuncionarios cadastrados:\n");

    while (fscanf(arquivo, "Nome: %49[^|] | Salario: %f | Horas Extras: %d\n",
                  funcionario.nome, &funcionario.salario,
                  &funcionario.horasExtras) == 3) {

        printf("\nNome: %s", funcionario.nome);
        printf("Salario: %.2f\n", funcionario.salario);
        printf("Horas Extras: %d\n", funcionario.horasExtras);
    }

    fclose(arquivo);

}
