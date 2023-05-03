#include <stdio.h>

int main()
{
    int num_times, num_jogadores, idade, i, j;
    float peso;
    float sum_idades, sum_pesos, media_idades, media_pesos;
    int jogadores_18=0;
    int peso_acima_80=0;
    
    // leitura do número de times
    //do {
        printf("Digite o numero de times no campeonato (entre 3 e 9): ");
        scanf("%d", &num_times);
    //} while (num_times < 3 || num_times > 9);

    // leitura do número de jogadores por time
    //do {
        printf("Digite o numero de jogadores por time (entre 6 e 11): ");
        scanf("%d", &num_jogadores);
    //} while (num_jogadores < 6 || num_jogadores > 11);

    int idades[num_times][num_jogadores];
    float pesos[num_times][num_jogadores];

    // leitura da idade e peso dos jogadores de cada time
    for (i = 0; i < num_times; i++) {
        printf("Time %d\n", i+1);
        for (j = 0; j < num_jogadores; j++) {
            printf("Digite a idade do jogador %d: ", j+1);
            scanf("%d", &idade);
            idades[i][j] = idade;
            printf("Digite o peso do jogador %d: ", j+1);
            scanf("%f", &peso);
            pesos[i][j] = peso;
        }
    }


    // cálculo da média de idade dos jogadores de cada time
    printf("Media de idade dos jogadores de cada time:\n");
    for (i = 0; i < num_times; i++) {
        sum_idades = 0;
        for (j = 0; j < num_jogadores; j++) {
            sum_idades += idades[i][j];
        }
        media_idades = sum_idades / num_jogadores;
        printf("Time %d: %.2f\n", i+1, media_idades);
    }

    // cálculo da média de peso dos jogadores acima de 25 anos de cada time
    printf("Media de peso dos jogadores acima de 25 anos de cada time:\n");
    for (i = 0; i < num_times; i++) {
        sum_pesos = 0;
        int count = 0;
        for (j = 0; j < num_jogadores; j++) {
            if (idades[i][j] > 25) {
                sum_pesos += pesos[i][j];
                count++;
            }
        }
        if (count == 0) {
            printf("Time %d: Nao ha jogadores acima de 25 anos\n", i+1);
        } else {
            media_pesos = sum_pesos / count;
            printf("Time %d: %.2f\n", i+1, media_pesos);
        }
    }

    //quantidade de jogadores abaixo de 18 anos

    for (i = 0; i < num_times; i++) {
        for (j = 0; j < num_jogadores; j++) {
            if (idades[i][j] < 18) {
                jogadores_18 = jogadores_18 + 1;
            }
        }
    }
    printf("Numero de jogadores abaixo de 18 anos:%d\n", jogadores_18);

    //quantidade e porcentagem de jogadores acima de 80kg

    for (i = 0; i < num_times; i++) {
        for (j = 0; j < num_jogadores; j++) {
            if (pesos[i][j] > 80) {
                peso_acima_80 = peso_acima_80 + 1;
            }
        }
    }
    float porcentagem;
    porcentagem=((float) peso_acima_80/((float) num_jogadores*num_times))*100;
    printf("jogadores acima de 80kg:%d\n\n", peso_acima_80);
    printf("porcentagem de jogadores acima de 80kg:%.2f por cento\n\n", porcentagem);

    return 0;
}
