// Online C compiler to run C program online
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

//informações adicionais
float valorA1 = 0, valorA2 = 0, valorB1 = 0, valorB2 = 0;

/* SOLICITO AO USUÁRIO QUE INFORME ESSES DADOS DA 1° CARTA*/
    printf("Carta 1\n");
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

    /* SOLICITO AO USUÁRIO QUE INFORME ESSES DADOS DA 2° CARTA*/
    printf("Carta 2\n");
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

    int atr;
    printf("Informe o número do 1° atributo que deseja comparar (1 a 5)\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos turísticos\n");
    printf("5.Densidade demográfica\n");
    scanf("%d", &atr);

    //COMPARANDO
    
    switch (atr)
    {
    case 1:
        if (populacao > populacao2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 1.População\n");
            printf("A carta A possui %d habitantes e a carta B possui %d habitantes\n", populacao, populacao2);
            printf("A carta A venceu!");

        }else if (populacao == populacao2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 1.População\n");
            printf("A carta A possui %d habitantes e a carta B possui %d habitantes\n", populacao, populacao2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 1.População\n");
            printf("A carta A possui %d habitantes e a carta B possui %d habitantes\n", populacao, populacao2);
            printf("A carta B venceu!");
        }
        break;
    
    case 2:
            if (area > area2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 2.Área\n");
            printf("A carta A possui %.2f km² e a carta B possui %.2f km²\n", area, area2);
            printf("A carta A venceu!");

        }else if (area == area2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 2.Área\n");
            printf("A carta A possui %.2f km² e a carta B possui %.2f km²\n", area, area2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 2.Área\n");
            printf("A carta A possui %.2f km² e a carta B possui %.2f km²\n", area, area2);
            printf("A carta B venceu!");
        }
        break;

    case 3:
        if (pib > pib2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 3.PIB\n");
            printf("A carta A possui %.2f milhões de reais e a carta B possui %.2f milhões de reais\n", pib, pib2);
            printf("A carta A venceu!");

        }else if (pib == pib2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 3.PIB\n");
            printf("A carta A possui %.2f milhões de reais e a carta B possui %.2f milhões de reais\n", pib, pib2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 3.PIB\n");
            printf("A carta A possui %.2f milhões de reais e a carta B possui %.2f milhões de reais\n", pib, pib2);
            printf("A carta B venceu!");
        }
        break;
    
    case 4:
    if (pontos_tur > pontos_tur2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 4.Número de pontos turísticos\n");
            printf("A carta A possui %d pontos turísticos e a carta B possui %d pontos turísticos\n", pontos_tur, pontos_tur2);
            printf("A carta A venceu!");

        }else if (pontos_tur == pontos_tur2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 4.Número de pontos turísticos\n");
            printf("A carta A possui %d pontos turísticos e a carta B possui %d pontos turísticos\n", pontos_tur, pontos_tur2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 4.Número de pontos turísticos\n");
            printf("A carta A possui %d pontos turísticos e a carta B possui %d pontos turísticos\n", pontos_tur, pontos_tur2);
            printf("A carta B venceu!");
        }
        break;
    case 5:
        if (densidade < densidade2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 5.Densidade demográfica\n");
            printf("A carta A possui %.2f hab/km² e a carta B possui %.2f hab/km²\n", densidade, densidade2);
            printf("A carta A venceu!");

        }else if (pib == pib2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 5.Densidade demográfica\n");
            printf("A carta A possui %.2f hab/km² e a carta B possui %.2f hab/km²\n", densidade, densidade2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 5.Densidade demográfica\n");
            printf("A carta A possui %.2f hab/km² e a carta B possui %.2f hab/km²\n", densidade, densidade2);
            printf("A carta B venceu!\n");
        }
        break;
            
    
    
    default:
            printf("Entrada inválida!\n");

        break;
    }    
    int atr2;
    printf("*Orientação\n*");
    printf("*O 2° atributo escolhido deve ser diferente do 1°\n*");
    printf("Informe o número do 2° atributo que deseja comparar (1 a 5)\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos turísticos\n");
    printf("5.Densidade demográfica\n");
    scanf("%d", &atr2);
    
    while (atr == atr2){
        printf("O 2° atributo escolhido deve ser diferente do 1°\n");
        printf("Informe um atributo diferente do 1°\n");
        scanf("%d", &atr2);
    }
    switch (atr2)
    {
    case 1:
        if (populacao > populacao2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 1.População\n");
            printf("A carta A possui %d habitantes e a carta B possui %d habitantes\n", populacao, populacao2);
            printf("A carta A venceu!");

        }else if (populacao == populacao2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 1.População\n");
            printf("A carta A possui %d habitantes e a carta B possui %d habitantes\n", populacao, populacao2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 1.População\n");
            printf("A carta A possui %d habitantes e a carta B possui %d habitantes\n", populacao, populacao2);
            printf("A carta B venceu!");
        }
        break;
    
    case 2:
            if (area > area2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 2.Área\n");
            printf("A carta A possui %.2f km² e a carta B possui %.2f km²\n", area, area2);
            printf("A carta A venceu!");

        }else if (area == area2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 2.Área\n");
            printf("A carta A possui %.2f km² e a carta B possui %.2f km²\n", area, area2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 2.Área\n");
            printf("A carta A possui %.2f km² e a carta B possui %.2f km²\n", area, area2);
            printf("A carta B venceu!");
        }
        break;

    case 3:
        if (pib > pib2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 3.PIB\n");
            printf("A carta A possui %.2f milhões de reais e a carta B possui %.2f milhões de reais\n", pib, pib2);
            printf("A carta A venceu!");

        }else if (pib == pib2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 3.PIB\n");
            printf("A carta A possui %.2f milhões de reais e a carta B possui %.2f milhões de reais\n", pib, pib2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 3.PIB\n");
            printf("A carta A possui %.2f milhões de reais e a carta B possui %.2f milhões de reais\n", pib, pib2);
            printf("A carta B venceu!");
        }
        break;
    
    case 4:
    if (pontos_tur > pontos_tur2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 4.Número de pontos turísticos\n");
            printf("A carta A possui %d pontos turísticos e a carta B possui %d pontos turísticos\n", pontos_tur, pontos_tur2);
            printf("A carta A venceu!");

        }else if (pontos_tur == pontos_tur2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 4.Número de pontos turísticos\n");
            printf("A carta A possui %d pontos turísticos e a carta B possui %d pontos turísticos\n", pontos_tur, pontos_tur2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 4.Número de pontos turísticos\n");
            printf("A carta A possui %d pontos turísticos e a carta B possui %d pontos turísticos\n", pontos_tur, pontos_tur2);
            printf("A carta B venceu!");
        }
        break;
    case 5:
        if (densidade < densidade2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 5.Densidade demográfica\n");
            printf("A carta A possui %.2f hab/km² e a carta B possui %.2f hab/km²\n", densidade, densidade2);
            printf("A carta A venceu!");

        }else if (densidade == densidade2){
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 5.Densidade demográfica\n");
            printf("A carta A possui %.2f hab/km² e a carta B possui %.2f hab/km²\n", densidade, densidade2);
            printf("Empate!");

        }else{
            printf("Estados comparados:%s e %s\n",estado,estado2);
            printf("O atributo escolhido foi: 5.Densidade demográfica\n");
            printf("A carta A possui %.2f hab/km² e a carta B possui %.2f hab/km²\n", densidade, densidade2);
            printf("A carta B venceu!");
            }
            break;
    
    default:
            printf("Entrada inválida!\n");

        break;
        
        
    }
    //Atribuindo o valor do 1° atributo
    switch (atr) {
    case 1: valorA1 = populacao; valorB1 = populacao2; break;
    case 2: valorA1 = area; valorB1 = area2; break;
    case 3: valorA1 = pib; valorB1 = pib2; break;
    case 4: valorA1 = pontos_tur; valorB1 = pontos_tur2; break;
    case 5: valorA1 = densidade; valorB1 = densidade2; break;
    }
    switch (atr2) {
    case 1: valorA2 = populacao; valorB2 = populacao2; break;
    case 2: valorA2 = area; valorB2 = area2; break;
    case 3: valorA2 = pib; valorB2 = pib2; break;
    case 4: valorA2 = pontos_tur; valorB2 = pontos_tur2; break;
    case 5: valorA2 = densidade; valorB2 = densidade2; break;
    }
    float somaA = valorA1 + valorA2;
    float somaB = valorB1 + valorB2;

    printf("\nSoma dos atributos:\n");
    printf("Carta A: %.2f\n", somaA);
    printf("Carta B: %.2f\n", somaB);

    if (somaA > somaB) {
    printf("Resultado Final: A carta A venceu a rodada!\n");
    } else if (somaA < somaB) {
    printf("Resultado Final: A carta B venceu a rodada!\n");
    } else {
    printf("Resultado Final: Empate!\n");
}
}