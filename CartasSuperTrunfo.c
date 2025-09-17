#include <stdio.h>

int main() {
    // Carta 1
    unsigned long int populacao1;
    int ponto1;
    float area1, pib1;
    float densidade1, pib_per_capita1, super_poder1;
    char estado1[50], codigo1[50], cidade1[50];

    printf("===== Carta 1 =====\n");
    printf("Qual o estado (A-H)?: ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto1);

    // Cálculo da carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) +
                   ponto1 + pib_per_capita1 + (1.0f / densidade1);

    // Carta 2
    unsigned long int populacao2;
    int ponto2;
    float area2, pib2;
    float densidade2, pib_per_capita2, super_poder2;
    char estado2[50], codigo2[50], cidade2[50];

    printf("\n===== Carta 2 =====\n");
    printf("Qual o estado (A-H)?: ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto2);

    // Cálculo da carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) +
                   ponto2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibindo os dados da carta 1
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibindo os dados da carta 2
    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n===== Comparação de Cartas =====\n");

    printf("População: %s venceu\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s venceu\n", (ponto1 > ponto2) ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: %s venceu\n", (pib_per_capita1 > pib_per_capita2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", (super_poder1 > super_poder2) ? "Carta 1" : "Carta 2");

    return 0;
}
