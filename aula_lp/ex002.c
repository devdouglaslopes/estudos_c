#include <stdio.h>

int main(){
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d",&num);

    if (num % 2 == 0) {
        printf("O número %d é par.", num);
        /* code */
    };
    if (num % 2 == 1) {
        printf("O número %d é ímpar.", num);
        /* code */
    };
};
