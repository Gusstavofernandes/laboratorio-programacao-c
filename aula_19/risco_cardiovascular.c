#include <stdio.h>
//Gustavo Fernandes de Oliveira Cabanez, Rafaela Ribeiro Rocha


int calcularPontuacao(float f[]) {
    int pontos = 0;
    float imc = f[6] / (f[7] * f[7]);

    if (f[0] >= 65) pontos += 3;
    if (f[1] >= 160) pontos += 3;
    if (f[2] == 1) pontos += 3;

    if (f[3] == 1) pontos += 2;
    if (f[4] == 1) pontos += 2;
    if (f[5] >= 160) pontos += 2;
    if (imc >= 30) pontos += 2;

    if (f[8] == 1) pontos += 1;
    if (f[9] == 1) pontos += 1;
    if (f[10] == 1) pontos += 1;
    if (f[11] == 1) pontos += 1;
    if (f[12] == 1) pontos += 1;

    return pontos;
}

void mostrarClassificacao(int pontos) {
    if (pontos <= 4) printf("Classificacao: Menor de 10%%\n");
    else if (pontos <= 9) printf("Classificacao: Entre 10%% e 20%%\n");
    else if (pontos <= 14) printf("Classificacao: Entre 20%% e 30%%\n");
    else if (pontos <= 18) printf("Classificacao: Entre 30%% e 50%%\n");
    else printf("Classificacao: Acima de 50%%\n");
}

int main() {
    char nomes[5][50];
    float fatores[5][13];
    char *perguntas[13] = {
        "Idade",
        "Pressao arterial sistolica (mmHg)",
        "Tabagismo (1 - Sim / 0 - Nao)",
        "Diabetes (1 - Sim / 0 - Nao)",
        "Historico de doenca cardiaca (1 - Sim / 0 - Nao)",
        "Colesterol LDL (mg/dL)",
        "Peso (kg)",
        "Altura (m)",
        "Sedentarismo (1 - Sim / 0 - Nao)",
        "Alimentacao rica em ultraprocessados (1 - Sim / 0 - Nao)",
        "Estresse cronico elevado (1 - Sim / 0 - Nao)",
        "Sono inadequado (1 - Sim / 0 - Nao)",
        "Sexo biologico masculino (1 - Sim / 0 - Nao)"
    };
    int qtd, i, j;

    printf("Quantidade de pacientes (ate 5): ");
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) {
        printf("\nNome do paciente %d: ", i + 1);
        scanf("%s", nomes[i]);
        for (j = 0; j < 13; j++) {
            printf("%s: ", perguntas[j]);
            scanf("%f", &fatores[i][j]);
        }
    }

    printf("\n==============================\n");
    printf("  SISTEMA DE ANALISE DE RISCO\n");
    printf("==============================\n");
    printf("Quantidade de pacientes: %d\n\n", qtd);
    for (i = 0; i < qtd; i++) {
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }

    printf("\n==============================\n");
    printf("  RELATORIO DE RISCO\n");
    printf("==============================\n");
    for (i = 0; i < qtd; i++) {
        printf("\nPaciente: %s\n", nomes[i]);
        mostrarClassificacao(calcularPontuacao(fatores[i]));
    }

    return 0;
}