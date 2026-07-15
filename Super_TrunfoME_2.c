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


    //Opção

    int opcao;


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

    //entrada da carta 2

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

     //Menu de Interação

     printf ("### SUPER TRUNFO ###\n");
     printf ("Escolha o atributo para comparar:\n");
     printf ("1 - Populacao\n");
     printf ("2 - Area\n");
     printf ("3 - PIB\n");
     printf ("4 - Pontos Turisticos\n");
     printf ("5 - Densidade Demografica\n");
     printf ("Opcao: ");
     scanf ("%d", &opcao);



    //Comparação por Switch

    switch (opcao)
    {
        case 1:
        printf ("Comparando Populacao: \n");
        printf ("%s: %lu habitantes\n", cidade1, populacao1);
        printf ("%s: %lu habitantes\n", cidade2, populacao2);

        if (populacao1 > populacao2)
            printf ("Vencedor: %s\n", cidade1);
        else if (populacao2 > populacao1)
            printf ("Vencedor: %s\n", cidade2);
        else 
            printf ("Empate!\n");
        break;

        case 2:
        printf ("Comparando Area: \n");
        printf ("%s: %.2f Km²\n", cidade1, area1);
        printf ("%s: %.2f Km²\n", cidade2, area2);

        if (area1 > area2)
            printf ("Vencedor: %s\n", cidade1);
        else if (area2 > area1)
            printf ("Vencedor: %s\n", cidade2);
        else 
            printf ("Empate!\n");
        break;

        case 3:
        printf ("Comparando PIB: \n");
        printf ("%s: PIB = %.2f\n", cidade1, pib1);
        printf ("%s: PIB = %.2f\n", cidade2, pib2);

        if (pib1 > pib2)
            printf ("Vencedor: %s\n", cidade1);
        else if (pib2 > pib1)
            printf ("Vencedor: %s\n", cidade2);
        else 
            printf ("Empate!\n");
        break;

        case 4:
        printf ("Comparando de Pontos Turisticos: \n");
        printf ("%s: %d Pontos\n", cidade1, pontos1);
        printf ("%s: %d Pontos\n", cidade2, pontos2);

        if (pontos1 > pontos2)
            printf ("Vencedor: %s\n", cidade1);
        else if (pontos2 > pontos1)
            printf ("Vencedor: %s\n", cidade2);
        else 
            printf ("Empate!\n");
        break;

        case 5:
        printf ("Comparando Densidade Populacional: \n");
        printf ("%s: %.2f Densidade Populacional\n", cidade1, densidade1);
        printf ("%s: %.2f Densidade Populacional\n", cidade2, densidade2);

        if (densidade1 < densidade2)
            printf ("Vencedor: %s\n", cidade1);
        else if (densidade2 < densidade1)
            printf ("Vencedor: %s\n", cidade2);
        else 
            printf ("Empate!\n");
        break;

        default:
            printf ("Opcao Invalida! \n");


    }




   


   

   


     
    return 0;


}



