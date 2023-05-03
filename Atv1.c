#include <stdio.h>
#include <stdlib.h>

int main (){
    int i=1, voltas;
    float melhorv, tmaior=0.00, tmenor=500000000.00, tempov, tempot=0.00, media;
    printf("\ndefina o numero de voltas de uma corrida:");
    scanf("%d", &voltas);
    for(i=1;i<=voltas;i++){
        printf("\ndigite o tempo da volta:");
        scanf("%f", &tempov);
        tempot=tempot+tempov;
        if(tempov>tmaior){
            tmaior=tempov;
        }
        else if(tempov<tmenor){
            tmenor=tempov;
        }
    }
    for(i=1;i<=voltas;i++){
        melhorv=tempov;
        if(melhorv==tmenor){
            melhorv=i;
        }
    }
    media=tempot/voltas;
    printf("tmaior:%.2fsegundos\n", tmaior);
    printf("menor tempo:%.2f segundos\n", tmenor);
    printf("melhor volta: volta numero %.2f\n", melhorv);
    printf("media de tempo de todas as voltas:%.2f segundos\n\n", media);


return 0;
}