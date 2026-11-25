#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[100];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario1, funcionario2;
    float diferenca;
    printf("=== Cadastro do Funcionario 1 ===\n");
    printf("Nome: ");
    fgets(funcionario1.nome, sizeof(funcionario1.nome), stdin);
    funcionario1.nome[strcspn(funcionario1.nome, "\n")] = '\0'; // Remove o '\n' do final

    printf("Idade: ");
    scanf("%d", &funcionario1.idade);

    printf("Salario: R$ ");
    scanf("%f", &funcionario1.salario);

    getchar(); // Limpa o buffer do teclado antes da próxima leitura de string

    printf("\n=== Cadastro do Funcionario 2 ===\n");
    printf("Nome: ");
    fgets(funcionario2.nome, sizeof(funcionario2.nome), stdin);
    funcionario2.nome[strcspn(funcionario2.nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &funcionario2.idade);

    printf("Salario: R$ ");
    scanf("%f", &funcionario2.salario);

    // Requisito 5: Apresentar os dados cadastrados
    printf("\n=== Dados Cadastrados ===\n");
    printf("Funcionario 1: %s | Idade: %d anos | Salario: R$ %.2f\n", 
           funcionario1.nome, funcionario1.idade, funcionario1.salario);
    printf("Funcionario 2: %s | Idade: %d anos | Salario: R$ %.2f\n", 
           funcionario2.nome, funcionario2.idade, funcionario2.salario);

    printf("\n=== Resultado da Comparacao ===\n");
    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("Maior salario: %s (R$ %.2f)\n", funcionario1.nome, funcionario1.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("Maior salario: %s (R$ %.2f)\n", funcionario2.nome, funcionario2.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario (R$ %.2f).\n", funcionario1.salario);
    }

    return 0;
}