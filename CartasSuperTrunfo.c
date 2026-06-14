#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50], codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2[50], codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada Carta 1
    printf("=== Cadastro Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    // Entrada Carta 2
    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    // Cálculos Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibPerCapita1 +
        (1.0 / densidade1);


    // Cálculos Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    float superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibPerCapita2 +
        (1.0 / densidade2);


    // Exibição dos dados
    printf("\n=== Dados Calculados ===\n");

    printf("\nCarta 1 - %s\n", nome1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2 - %s\n", nome2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


    // Comparações
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (pontos1 > pontos2) ? 1 : 2,
           pontos1 > pontos2);

    // MENOR vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade1 < densidade2) ? 1 : 2,
           densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2,
           pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (superPoder1 > superPoder2) ? 1 : 2,
           superPoder1 > superPoder2);

    return 0;
}