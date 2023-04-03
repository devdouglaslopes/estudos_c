#include <stdio.h>

int main(){
    float velocidade, multa;

    printf("Digite a velocidade do carro: ");
    scanf("%f",&velocidade);

    if (velocidade > 80){
        multa = (velocidade - 80) * 5;
        printf("Você foi multado, limite de 80km/h excedido. Valor da multa: %.2f reais", multa);
    };
};
