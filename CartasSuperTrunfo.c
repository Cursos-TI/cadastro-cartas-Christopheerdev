#include <stdio.h>

int main() {

    /* ===== CARTA 1 ===== */
    int carta1;
    char estado1[3];
    char codigo_carta1[10];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    /* ===== CARTA 2 ===== */
    int carta2;
    char estado2[3];
    char codigo_carta2[10];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    /* ===== ENTRADA CARTA 1 ===== */
    printf("Digite o numero da carta: ");
    scanf("%d", &carta1);

    printf("Digite o estado (A a H): ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    /* ===== CÁLCULOS CARTA 1 ===== */
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    /* ===== ENTRADA CARTA 2 ===== */
    printf("\nDigite o numero da carta: ");
    scanf("%d", &carta2);

    printf("Digite o estado (A a H): ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    /* ===== CÁLCULOS CARTA 2 ===== */
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    /* ===== SAÍDA CARTA 1 ===== */
    printf("\n--- INFORMACOES DA CARTA 1 ---\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.6f\n", pib_per_capita1);

    /* ===== SAÍDA CARTA 2 ===== */
    printf("\n--- INFORMACOES DA CARTA 2 ---\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.6f\n", pib_per_capita2);


    /* ===== COMPARAÇÃO DAS CARTAS ===== */

printf("\n=== COMPARACAO DE CARTAS (Atributo: Populacao) ===\n");

printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);

if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
}
else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
}
else {
    printf("Resultado: Empate!\n");
}


    return 0;
}
