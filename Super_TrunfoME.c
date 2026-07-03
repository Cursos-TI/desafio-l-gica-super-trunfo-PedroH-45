#include <stdio.h>
int main(){


    //carta 1
    char estado1 [3];
    char codigo1 [30];
    char cidade1 [40];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float percapta1;
    float superpoder1;


    //carta 2
    char estado2 [3];
    char codigo2 [30];
    char cidade2 [40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapta2;
    float superpoder2;

    //comparação
    int pontosA = 0;
    int pontosB = 0;

    //entrada da carta 1
    
    printf("Cadastro da Carta 1\n\n");

    printf("Digite o Estado: ");
    scanf("%2s", &estado1);

    printf("Digite o codigo da Carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o Numero de Habitantes: ");
    scanf("%lu", &populacao1); //Não le os apos o ponto, dijitar o numero inuteiro.

    printf("Digite a Area em (Km): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos1); //Não le os apos o ponto, dijitar o numero inuteiro.

    //calculo da carta1

    densidade1 = populacao1 / area1;
    percapta1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + percapta1 + (1.0 / densidade1);

    //saida carta 1

     printf("Estado: %2s\n\n", estado1);
     printf("Codigo da Carta 1: %s\n\n", codigo1);
     printf("Nome da Cidade: %s\n\n", cidade1);
     printf("Numero de Habitantes: %lu\n\n", populacao1);
     printf("Tamanho da Cidade: %.2f\n\n", area1);
     printf("O PIB da cidade: %.2f \n\n", pib1);
     printf("Pontos Turisticos: %d\n\n", pontos1);
     printf("Densidade Populacional: %.2f\n\n", densidade1);
     printf("PIB per Capita: %.12f\n\n", percapta1);

    //entrada da carta 1

    printf("Cadastro da Carta 2\n\n");

    printf("Digite o Estado: ");
    scanf("%2s", &estado2);

    printf("Digite o codigo da Carta: ");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o Numero de Habitantes: ");
    scanf("%lu", &populacao2); //Não le os apos o ponto, dijitar o numero inuteiro.

    printf("Digite a Area (Km): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidades de pontos turisticos: ");
    scanf("%d", &pontos2); //Não le os apos o ponto, dijitar o numero inuteiro.

    //calculo da carta 2

    densidade2 = populacao2 / area2;
    percapta2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + percapta2 + (1.0 / densidade2);

    //saida carta 2

     printf("Estado: %2s\n\n", estado2);
     printf("Codigo da Carta 2: %s\n\n", codigo2);
     printf("Nome da Cidade: %s\n\n", cidade2);
     printf("Numero de Habitantes: %lu\n\n", populacao2);
     printf("Tamanho da Cidade: %.2f\n\n", area2);
     printf("O PIB da cidade: %.2f \n\n", pib2);
     printf("Pontos Turisticos: %d\n\n", pontos2);
     printf("Densidade Populacional: %.2f\n\n", densidade2);
     printf("PIB per Capita: %.12f\n\n", percapta2);


    //comparação


    pontosA += (populacao1 > populacao2) ? 1:0;
    pontosB += (populacao2 > populacao1) ? 1:0;
    printf("População : %d\n", populacao1 > populacao2);

    pontosA += (area1 > area2) ? 1:0;
    pontosB += (area2 > area1) ? 1:0;
    printf("Area : %d\n", area1 > area2);

    pontosA += (pib1 > pib2) ? 1:0;
    pontosB += (pib2 > pib1) ? 1:0;
    printf("PIB : %d\n", pib1 > pib2);

    pontosA += (pontos1 > pontos2) ? 1:0;
    pontosB += (pontos2 > pontos1) ? 1:0;
    printf("Pontos Turisticos : %d\n", pontos1 > pontos2);

    pontosA += (densidade1 < densidade2) ? 1:0;
    pontosB += (densidade2 < densidade1) ? 1:0;
    printf("Densidade Populacional : %d\n", densidade1 < densidade2);

    pontosA += (percapta1 > percapta2) ? 1:0;
    pontosB += (percapta2 > percapta1) ? 1:0;
    printf("PIB per Capita : %d\n", percapta1 > percapta2);

    pontosA += (superpoder1 > superpoder2) ? 1:0;
    pontosB += (superpoder2 > superpoder1) ? 1:0;

    printf("Super Poder : %d\n", superpoder1 > superpoder2);


    //Comparação entre de quem vence entre as duas cartas usando IF e ELSE.

    if (populacao1 > populacao2) {
        printf("Em Populacao a Carta 1 venceu.\n");
    } else {
        printf("Em Populacao a Carta 2 venceu.\n");
    }

    if (area1 > area2) {
        printf("Em Tamanho a Carta 1 venceu.\n");
    } else {
        printf("Em Tamanho a Carta 2 venceu.\n");
    }

    if (pib1 > pib2) {
        printf("Em PIB a Carta 1 venceu.\n");
    } else {
        printf("Em PIB a Carta 2 venceu.\n");
    }

    if (pontos1 > pontos2) {
        printf("Em Pontos Turisticos a Carta 1 venceu.\n");
    } else {
        printf("Em Pontos Turisticos a Carta 2 venceu.\n");
    }

    if (densidade1 < densidade2) {
        printf("Em Densidade Populacional a Carta 1 venceu.\n");
    } else {
        printf("Em Densidade Populacional a Carta 2 venceu.\n");
    }

    if (percapta1 > percapta2) {
        printf("Em PIB per Capita a Carta 1 venceu.\n");
    } else {
        printf("Em PIB per Capita a Carta 2 venceu.\n");
    }

    if (superpoder1 > superpoder2) {
        printf("Em Poder a Carta 1 venceu.\n");
    } else {
        printf("Em Poder a Carta 2 venceu.\n");
    }



     
    return 0;


}



