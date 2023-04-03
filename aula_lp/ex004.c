#include <stdio.h>

int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite a primeira data: ");
    scanf("%d/%d/%d", &dia1, &mes1 , &ano1);

    printf("Digite a segunda data: ");
    scanf("%d/%d/%d", &dia2, &mes2 , &ano2);

    if (ano1 > ano2) {
        printf("A primeira data (%d/%d/%d) é maior.", dia1, mes1 , ano1);
    };

    if (ano1 < ano2) {
        printf("A segunda data (%d/%d/%d) é maior.", dia2, mes2 , ano2);
    };

    if (ano1 == ano2 && mes1 > mes2) {
        printf("A primeira data (%d/%d/%d) é maior.", dia1, mes1 , ano1);
    };

    if (ano1 == ano2 && mes1 < mes2) {
        printf("A segunda data (%d/%d/%d) é maior.", dia2, mes2 , ano2);
    };

    if (ano1 == ano2 && mes1 == mes2 && dia1 > dia2) {
        printf("A primeira data (%d/%d/%d) é maior.", dia1, mes1 , ano1);
    };

    if (ano1 == ano2 && mes1 == mes2 && dia1 < dia2) {
        printf("A segunda data (%d/%d/%d) é maior.", dia2, mes2 , ano2);
    };

    if (ano1 == ano2 && mes1 == mes2 && dia1 == dia2) {
        printf("As duas datas são iguais. (%d/%d/%d)", dia1, mes1 , ano1);
    };
};
