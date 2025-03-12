#include <stdio.h>

int main(){
    char estado_carta1[20]="Rio de Janeiro";
    char codigo_carta1[5]="A01";
    char cidade_carta1[20]="guadalupe";
    int população_carta1="20000000";
    float area_carta1=455445.00;
    float pib_carta1=1234567.00;
    int pontos_turisticos=25;


    char estado_carta2[20]="São Paulo";
    char codigo_carta2[5]="B2";
    char cidade_carta2[20]="Barueri";
    int população_carta2="300000000";
    float area_carta2=466464.00;
    float pib_carta2=398754.875;
    int pontos_turisticos=15;


    prinf("Estado: %s\n, estado_carta1");
    printf("codigo de carta: %s\n, codigo_carta1");
    printf("cidade: %s\n, cidade_carta1");
    printf("população: %e\n, população_carta1");
    printf("area: %f\n, area_carta1");
    printf("pib: %f\n, pib_carta1");
    printf("pontos turisticos: %e\n, pontos turisticos_carta1");


    printf("Estado: %s\n, estado_carta2");
    printf("codigo da carta: %s\n, codigo_carta2");
    printf("cidade: %s\n, cidade_carta2");
    printf("população: %e\n, população_carta2");
    printf("area: %f\n, area_carta2");
    printf("pib: %f\n, pib_carta2");
    printf("pontos turisticos: %e\n, pontos turisticos_carta2");



    // carta1

    scanf ("%s, &estado");
    scanf("%s, &codigo");
    scanf("%s, &cidade");
    scanf("%e, &população");
    scanf("%f, &area");
    scanf("%f, &pib");
    scanf("%e, &pntos turisticos");


    // carta2

    scanf("%s, &estado");
    scanf("%s, &codigo");
    scanf("%s, &cidade");
    scanf("%e, &população");
    scanf("%f, &area");
    scanf("%f, &pib");
    scanf("%e, &ponto turisticos");

    return 0;
}



