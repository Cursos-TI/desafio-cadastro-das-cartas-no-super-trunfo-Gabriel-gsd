#include <stdio.h>

int main (){

    // Declaração de variáveis para armazenar os dados das cartas:
    // Estado, Código, Cidade, População, Área, PIB, Pontos Turísticos
    // Densidade Populacional, PIB per Capita, Densidade Invertida e Super Poder

    char estado1[20], estado2[20], codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int pontos1, pontos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, densidadeinv1, densidadeinv2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;

    // Coleta de dados da 1ª carta:

    printf ("Digite o Estado da 1ª carta: ");
    scanf ("%s", estado1);
    printf ("Digite o código da 1ª carta: ");
    scanf ("%s", codigo1);
    printf ("Digite a Cidade da 1ª carta: ");
    scanf ("%s", cidade1);
    printf ("Digite a população da 1ª carta: ");
    scanf ("%lu", &populacao1);
    printf ("Digite a área da 1ª carta em km²: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB da 1ª carta: ");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos da 1ª carta: ");
    scanf ("%d", &pontos1);

    // Coleta de dados da 2ª carta:

    printf ("Digite o Estado da 2ª carta: ");
    scanf ("%s", estado2);
    printf ("Digite o código da 2ª carta: ");
    scanf ("%s", codigo2);
    printf ("Digite a Cidade da 2ª carta: ");
    scanf ("%s", cidade2);
    printf ("Digite a população da 2ª carta: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área da 2ª carta em km²: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB da 2ª carta: ");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos da 2ª carta: ");
    scanf ("%d", &pontos2);

    // Cálculo de Densidade Populacional e PIB per Capita de ambas as cartas:

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;

    // Cálculo da Densidade Invertida (1/densidade):
    
    densidadeinv1 = 1 / densidade1;
    densidadeinv2 = 1 / densidade2;

    // Cálculo do Super Poder:

    superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + densidadeinv1 + pibpercapita1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + densidadeinv2 + pibpercapita2;

    // Impressão de dados da 1ª carta:

    printf ("Carta 1: \n");
    printf ("Estado: %s \nCidade: %s \nCódigo: %s \n", estado1, cidade1, codigo1);
    printf ("Área: %.2f km² \nPopulação: %lu habitantes \n", area1, populacao1);
    printf ("PIB: %.2f de reais \nPontos Turísticos: %d \n", pib1, pontos1);
    printf ("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf ("Pib per Capita: %.2f reais. \n", pibpercapita1);
    printf ("Super Poder: %.2f pontos.\n", superpoder1);

     // Impressão de dados da 2ª carta:

    printf ("Carta 2: \n");
    printf ("Estado: %s \nCidade: %s \nCódigo: %s \n", estado2, cidade2, codigo2);
    printf ("Área: %.2f km² \nPopulação: %lu habitantes \n", area2, populacao2);
    printf ("PIB: %.2f de reais \nPontos Turísticos: %d \n", pib2, pontos2);
    printf ("Densidade Populacional: %.2f hab/km² \n", densidade2);   
    printf ("Pib per Capita: %.2f reais. \n", pibpercapita2);
    printf ("Super Poder: %.2f pontos.\n", superpoder2);

    // Comparação dos atributos para determinar o vencedor:

    printf ("Resultado do Jogo (1 = Carta 1 venceu e 0 = Carta 2 venceu): \n")
    printf ("População: %d \n", populacao1 > populacao2);
    printf ("Área: %d \n", area1 > area2);
    printf ("PIB: %d \n", pib1 > pib2);
    printf ("Pontos Turísticos: %d \n", pontos1 > pontos2);
    printf ("Densidade Populacional: %d \n", densidade1 < densidade2);  
    printf ("Pib per Capita: %d \n", pibpercapita1 > pibpercapita2);
    printf ("Super Poder: %d \n", superpoder1 > superpoder2);

    return 0;
}