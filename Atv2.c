#include <stdio.h>
#include <stdlib.h>

int mostrafinal (float fun1, float fun2, float fun3);
float calculoSalario(int pc, float sl, float ad);
int validaQuantidade (int pcs);

int main (){
    //declaracoes

    int pecas;
    float f1,f2,f3;
    float slr=0, adc=0;
    
    //sistema

    printf("salario inicial 600\n\n");
    printf("menos de 50 pecas sem adicional\nentre 50 a 80 pecas, 0,50 por peca\nacima de 80, 0,75 por peca\n\n");
    printf("digite a quantidade de pecas produzidas pelo funcionario 1:");
    scanf("%d", &pecas);

    f1=calculoSalario(pecas,slr,adc);
    
    slr=0;
    adc=0;

    printf("digite a quantidade de pecas produzidas pelo funcionario 2:");
    scanf("%d", &pecas);
    f2=calculoSalario(pecas,slr,adc);
    
     slr=0;
     adc=0;

    printf("digite a quantidade de pecas produzidas pelo funcionario 3:");
    scanf("%d", &pecas);
    
    f3=calculoSalario(pecas,slr,adc);

    printf("%d", mostrafinal(f1,f2,f3));
    return 0;
}
//funcoes

int validaQuantidade (int pcs){
    if(pcs<0){
        printf("\n\nvalor invalido\n\n");
    }
    return 0;
}

float calculoSalario(int pc, float sl, float ad){
    if(pc <= 50){
        printf("sem adicional\n");
        sl=600;
    }
    else if(pc>50 && pc<80){
        ad= pc*0.5;
        sl=600+ad;
    }
    else if(pc>80){
        ad=pc*0.75;
        sl=600+ad;
    }
    return sl;
}

int mostrafinal (float fun1, float fun2, float fun3){
    printf("funcionario1:R$%.2f\nfuncionario2:R$%.2f\nfuncionario3:R$%.2f\n\n", fun1, fun2, fun3);
    return fun1;
}