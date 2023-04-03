#include <stdio.h>

int main(){
    float n1, n2, n3, media, nota_exame;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    printf("Digite a terceira nota: ");
    scanf("%f",&n3);

    media = (n1 + n2 + n3) / 3;

    if (0 <= media && media < 3.0){
        printf("Média: %.2f  Aluno(a) Reprovado(a)!", media);
    };

    if (3.0 <= media && media < 7.0){
        nota_exame = 12.0 - media;
        printf("Média: %.2f  Aluno(a) de Exame! Você precisa tirar %.2f no exame para ser aprovado.", media, nota_exame);
    };

    if (7.0 <= media && media <= 10.0){
        printf("Média: %.2f  Aluno(a) de Aprovado(a)!", media);
    };
};
