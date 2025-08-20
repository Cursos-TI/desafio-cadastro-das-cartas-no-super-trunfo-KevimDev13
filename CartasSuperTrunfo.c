#include <stdio.h>

int main() {
    // Carta 1
    int populacao1, ponto1;
    float area1, pib1;
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

    // Carta 2
    int populacao2, ponto2;
    float area2, pib2;
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

    // Exibindo os dados
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto2);
    return 0;
}
