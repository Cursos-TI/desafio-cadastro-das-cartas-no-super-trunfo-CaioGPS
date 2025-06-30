#include <stdio.h>
int main(){

char estado[20];
char cod_carta[20];
char cidade[50];
int populacao, pontos_tur;
float area, pib;
/* SOLICITO AO USUÁRIO QUE INFORME ESSES DADOS DA 1° CARTA*/
    printf("Informe a letra do estado\n");
    scanf(" %s", estado);

    printf("Informe o código\n");
    scanf(" %s", cod_carta);

    printf("Informe a cidade\n");
    scanf("%s", cidade);

    printf("Informe a quantidade da população\n");
    scanf("%i", &populacao);

    printf("Informe a área\n");
    scanf("%f", &area);

    printf("Informe o PIB\n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos \n");
    scanf("%i", &pontos_tur);

    printf("Carta 1\nEstado:%c\nCódigo:%c\nNome da Cidade:%c\nPopulação:%i\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%i\n\n",estado, cod_carta, cidade, populacao, area, pib, pontos_tur);

    /* SOLICITO AO USUÁRIO QUE INFORME ESSES DADOS DA 2° CARTA*/
    printf("Informe a letra do estado\n");
    scanf(" %s", estado);

    printf("Informe o código\n");
    scanf(" %s", cod_carta);

    printf("Informe a cidade\n");
    scanf("%s", cidade);

    printf("Informe a quantidade da população\n");
    scanf("%i", &populacao);

    printf("Informe a área\n");
    scanf("%f", &area);

    printf("Informe o PIB\n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos \n");
    scanf("%i", &pontos_tur);


    printf("Carta 2\nEstado:%c\nCódigo:%c\nNome da Cidade:%c\nPopulação:%i\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%i",estado, cod_carta, cidade, populacao, area, pib, pontos_tur);



}
