#include <stdio.h>

int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2, data1, data2;

    printf("Digite duas datas:\n");
    scanf("%d/%d/%d", &dia1, &mes1 , &ano1);
    scanf("%d/%d/%d", &dia2, &mes2 , &ano2);

    data1 = ano1 * 10000 + mes1 * 100 + dia1;
    data2 = ano2 * 10000 + mes2 * 100 + dia2;

    if (data1 == data2) {
        printf("As dastas são iguais.");
    };

    if (data1 > data2) {
        printf("A data (%02d/%02d/%04d) é maior.", dia1, mes1 , ano1);
    };

    if (data1 < data2) {
        printf("A data (%02d/%02d/%04d) é maior.", dia2, mes2 , ano2);
    };
};
