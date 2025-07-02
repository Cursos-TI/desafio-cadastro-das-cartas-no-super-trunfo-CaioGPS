#include <stdio.h>
int main(){

//cartas1
char estado[20];
char cod_carta[20];
char cidade[50];
int populacao, pontos_tur;
float area, pib, densidade, pibper, superpoder, inversodens;

//cartas 2
char estado2[20];
char cod_carta2[20];
char cidade2[50];
int populacao2, pontos_tur2;
float area2, pib2, densidade2, pibper2, superpoder2, inversodens2;


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

    densidade = populacao/area;
    pibper = pib/populacao;
    inversodens = 1/densidade;
    superpoder = (float) populacao+area+pib+pontos_tur+pibper+inversodens;

    printf("Carta 1\nEstado:%s\nCódigo:%s\nNome da Cidade:%s\nPopulação:%i\nÁrea:%f km²\nPIB:%.2f bilhões de reais\nNúmero de pontos turísticos:%i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f\n",estado, cod_carta, cidade, populacao, area, pib, pontos_tur, densidade,pibper);

    /* SOLICITO AO USUÁRIO QUE INFORME ESSES DADOS DA 2° CARTA*/

    printf("Informe a letra do estado\n");
    scanf(" %s", estado2);

    printf("Informe o código\n");
    scanf(" %s", cod_carta2);

    printf("Informe a cidade\n");
    scanf("%s", cidade2);

    printf("Informe a quantidade da população\n");
    scanf("%i", &populacao2);

    printf("Informe a área\n");
    scanf("%f", &area2);

    printf("Informe o PIB\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos \n");
    scanf("%i", &pontos_tur2);

    densidade2 = populacao2/area2;
    pibper2 = pib2/populacao2;
    inversodens2 = 1/densidade2;
    superpoder2 = (float) populacao2+area2+pib2+pontos_tur2+pibper2+inversodens2;

    printf("Carta 2\nEstado:%s\nCódigo:%s\nNome da Cidade:%s\nPopulação:%i\nÁrea:%.2f km²\nPIB:%.2f bilhões de reais\nNúmero de pontos turísticos:%i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f\n\n",estado2, cod_carta2, cidade2, populacao2, area2, pib2, pontos_tur2, densidade2,pibper2);

    //COMPARANDO

    printf("***Comparação de Cartas***\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2); 
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_tur > pontos_tur2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibper > pibper2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder > superpoder2);



}