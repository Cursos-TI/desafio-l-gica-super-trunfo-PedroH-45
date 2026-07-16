#include <stdio.h>

int main() {
    
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
    int atributo1;
    int resultado1;


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
    int atributo2;
    int resultado2;

    //Para Comparação e calculo
    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;

    float somaCarta1, somaCarta2;


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

    //Primeiro Menu.

    printf ("Escolha o seu Primeiro Atributo \n");
    printf ("1 - Populacao \n");
    printf ("2 - Area \n");
    printf ("3 - PIB \n");
    printf ("4 - Pontos Turisticos \n");
    printf ("5 - Densidade Populacional \n");

    printf ("Escolha o Primeiro: \n");
    scanf ("%d", &atributo1);

    switch (atributo1)
    {
        case 1:
        printf ("Voce Escolheu Populacao \n");
        valor1Carta1 = populacao1;
        valor1Carta2 = populacao2;
        break;

        case 2:
        printf ("Voce Escolheu Area \n");
        valor1Carta1 = area1;
        valor1Carta2 = area2;
        break;

        case 3:
        printf ("Voce Escolheu PIB \n");
        valor1Carta1 = pib1;
        valor1Carta2 = pib2;
        break;

        case 4:
        printf ("Voce Escolheu Pontos Turisticos \n");
        valor1Carta1 = pontos1;
        valor1Carta2 = pontos2;
        break;

        case 5:
        printf ("Voce Escolheu Densidade Populacional \n");
        valor1Carta1 = 1.0 / densidade1;
        valor1Carta2 = 1.0 / densidade2;
        break;
    }

    //Segundo Menu.

    printf ("Escolha o seu Segundo Atributo \n");

    switch (atributo1) {

        case 1:
        printf ("2 - Area \n");
        printf ("3 - PIB \n");
        printf ("4 - Pontos Turisticos \n");
        printf ("5 - Densidade Populacional \n");
        break;

        case 2: 
        printf ("1 - Populacao \n");
        printf ("3 - PIB \n");
        printf ("4 - Pontos Turisticos \n");
        printf ("5 - Densidade Populacional \n");
        break;

        case 3: 
        printf ("1 - Populacao \n");
        printf ("2 - Area \n");
        printf ("4 - Pontos Turisticos \n");
        printf ("5 - Densidade Populacional \n");
        break;

        case 4: 
        printf ("1 - Populacao \n");
        printf ("2 - Area \n");
        printf ("3 - PIB \n");
        printf ("5 - Densidade Populacional \n");
        break;

        case 5: 
        printf ("1 - Populacao \n");
        printf ("2 - Area \n");
        printf ("3 - PIB \n");
        printf ("4 - Pontos Turisticos \n");
        break;

        default:
        printf ("Opcao Invalida! \n");
        return 1;

    }

    printf ("Escolha o Segundo: \n");
    scanf ("%d", &atributo2);


    if (atributo1 == atributo2)
    {
    printf ("Voce escolheu o Mesmo Atributo \n");

    } else {

    switch (atributo2)
        {

        case 1:
        printf ("Voce Escolheu Populacao \n");
        valor2Carta1 = populacao1;
        valor2Carta2 = populacao2;
        break;

        case 2:
        printf ("Voce Escolheu Area \n");
        valor2Carta1 = area1;
        valor2Carta2 = area2;
        break;

        case 3:
        printf ("Voce Escolheu PIB \n");
        valor2Carta1 = pib1;
        valor2Carta2 = pib2;
        break;

        case 4:
        printf ("Voce Escolheu Pontos Turisticos \n");
        valor2Carta1 = pontos1;
        valor2Carta2 = pontos2;
        break;

        case 5:
        printf ("Voce Escolheu Densidade Populacional \n");
        valor2Carta1 = 1.0 / densidade1;
        valor2Carta2 = 1.0 / densidade2;
        break;

        default:
        printf ("Opcao de Jogo Invalida! \n");
        break;
        }

        printf("Primeiro atributo: ");

    switch (atributo1){

        case 1:
        printf ("Populacao \n");
        break;

        case 2:
        printf ("Area \n");
        break;

        case 3:
        printf("PIB \n");
        break;

        case 4:
        printf ("Pontos Turisticos \n");
        break;

        case 5:
        printf ("Densidade Populacional \n");
        break;

    }

        printf("Segundo atributo: ");

    switch (atributo2){

        case 1:
        printf ("Populacao \n");
        break;

        case 2:
        printf ("Area \n");
        break;

        case 3:
        printf ("PIB \n");
        break;

        case 4:
        printf ("Pontos Turisticos \n");
        break;

        case 5:
        printf ("Densidade Populacional \n");
        break;

    }


    //Soma dos atributos.

    printf ("%s: %.2f x %.2f\n", cidade1, valor1Carta1, valor2Carta1);
    printf ("%s: %.2f x %.2f\n", cidade2, valor1Carta2, valor2Carta2);


    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    printf ("Valor da Comparacao \n");
    
    printf ("%s = %.2f\n", cidade1, somaCarta1);
    printf ("%s = %.2f\n", cidade2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf ("Vencedor: %s\n", cidade1);

    } else if (somaCarta2 > somaCarta1) {
        printf ("Vencedor: %s\n", cidade2);

    } else {
        printf ("Empate! \n");
    }

    }

    return 0;

}