#include "stdio.h"

int main(){

    float distancia, passagem;

    printf("Digite a distância que deseja percorrer em km: ");
    scanf("%f", &distancia);

    if (distancia <= 200.00) {
        passagem = distancia * 0.50;
        printf("O valor da passagem para essa distância é de %.2f", passagem);
    } else {
        passagem = distancia * 0.45;
        printf("O valor da passagem para essa distância é de %.2f", passagem);
    };
};
