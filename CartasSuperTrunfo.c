#include <stdio.h>

int main() {
    // Carta 1
    int populacao1, ponto1;
    float area1, pib1;
    float densidade1, pib_per_capita1;
    char estado1[50], codigo1[50], cidade1[50];

    printf("Qual o estado (A-H)?: ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto1);

    // Cálculo da carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    // Carta 2
    int populacao2, ponto2;
    float area2, pib2;
    float densidade2, pib_per_capita2;
    char estado2[50], codigo2[50], cidade2[50];

    printf("\n--- Agora a segunda carta ---\n");

    printf("Qual o estado (A-H)?: ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto2);

    // Cálculo da carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    // Exibindo os dados da carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibindo os dados da carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
