#include <stdio.h>

char validagenero() {
    char genero;
    do {
        printf("Informe o genero (M/F): ");
        scanf(" %c", &genero);
        genero = toupper(genero);
    } while (genero != 'M' && genero != 'F');
    return genero;
}
float validaSalario() {
    float salario;
    do {
        printf("Informe o salario: ");
        scanf("%f", &salario);
    } while (salario <= 1.0);
    return salario;
}
char* classificaSalario(float salario) {
    if (salario > 1400.0) {
        return "Acima";
    } else if (salario < 1400.0) {
        return "Abaixo";
    } else {
        return "Igual";
    }
}
void mostraClassifica(char genero, float salario, char* classificacao) {
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s\n", classificacao);
    printf("genero: %s\n", genero == 'M' ? "Masculino" : "Feminino");
}

int main() {
    int abaixo = 0, acima = 0;
    int n;
    printf("Informe o numero de assalariados a serem cadastrados: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Assalariado %d:\n", i+1);
        char genero = validagenero();
        float salario = validaSalario();
        char* classificacao = classificaSalario(salario);
        mostraClassifica(genero, salario, classificacao);
        if (salario < 1400.0) {
            abaixo++;
        } else if (salario > 1400.0) {
            acima++;
        }
        printf("\n");
    }
    printf("Quantidade de assalariados abaixo do salario minimo: %d\n", abaixo);
    printf("Quantidade de assalariados acima do salario minimo: %d\n", acima);
    return 0;
}
