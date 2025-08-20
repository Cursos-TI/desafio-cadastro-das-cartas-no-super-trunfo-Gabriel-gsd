#include <stdio.h>

int main (){

    char estado1[20], estado2[20], codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    // Coleta de dados da 1ª carta:

    printf ("Digite o Estado da 1ª carta: ");
    scanf ("%s", &estado1);
    printf ("Digite o código da 1ª carta: ");
    scanf ("%s", &codigo1);
    printf ("Digite a Cidade da 1ª carta: ");
    scanf ("%s", &cidade1);
    printf ("Digite a população da 1ª carta: ");
    scanf ("%d", &populacao1);
    printf ("Digite a área da 1ª carta em km²: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB da 1ª carta: ");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos da 1ª carta: ");
    scanf ("%d", &pontos1);

    // Coleta de dados da 2ª carta:

    printf ("Digite o Estado da 2ª carta: ");
    scanf ("%s", &estado2);
    printf ("Digite o código da 2ª carta: ");
    scanf ("%s", &codigo2);
    printf ("Digite a Cidade da 2ª carta: ");
    scanf ("%s", &cidade2);
    printf ("Digite a população da 2ª carta: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área da 2ª carta em km²: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB da 2ª carta: ");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos da 2ª carta: ");
    scanf ("%d", &pontos2);
    
    // Impressão de dados da 1ª carta:

    printf ("Carta 1: \n");
    printf ("Estado: %s - Cidade: %s - Código: %s \n", estado1, cidade1, codigo1);
    printf ("Área: %.1f - População: %d \n", area1, populacao1);
    printf ("PIB: %.1f - Pontos Turísticos: %d \n", pib1, pontos1);

     // Impressão de dados da 2ª carta:

    printf ("Carta 2: \n");
    printf ("Estado: %s - Cidade: %s - Código: %s \n", estado2, cidade2, codigo2);
    printf ("Área: %.1f - População: %d \n", area2, populacao2);
    printf ("PIB: %.1f - Pontos Turísticos: %d \n", pib2, pontos2);


    return 0;
}