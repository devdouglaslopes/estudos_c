#include <stdio.h>

int main(){
    float minutos, valor;

    printf("Digite a quantidade de minutos usados por mês: ");
    scanf("%f", &minutos);

    if (minutos > 200) {
        valor = minutos * 0.20;
        printf("O valor a ser pago é %f", valor);
    }else{
        if (minutos >= 200 && minutos <= 400) {
            valor = minutos * 0.18;
            printf("O valor a ser pago é %f", valor);
        }else{
            valor = minutos * 0.15;
            printf("O valor a ser pago é %.2f", valor);
        };
    };
};
