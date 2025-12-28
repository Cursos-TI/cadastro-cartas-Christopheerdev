#include <stdio.h>

int main() {

      /* ===== CARTA 1 ===== */
    int carta1;
    char estado1[2];
    char codigo_carta1[10];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;


      /* ===== CARTA 2 ===== */
    int carta2;
    char estado2[2];
    char codigo_carta2[10];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Coletando dados da carta 1

    printf("Digite o numero da carta: ");
    scanf("%d", &carta1);

    printf("Digite o estado (A a H): ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao (sem pontos): ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em R$): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Coletando dados da carta 2

    printf("\nDigite o numero da carta: ");
    scanf("%d", &carta2);

    printf("Digite o estado (A a H): ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao (sem pontos): ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em R$): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibindo informações da carta 1

    printf("\n--- Informacoes da Carta ---\n");
    printf("Carta:%d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);


    // Exibindo informações da carta 2

    printf("\n--- Informacoes da Carta ---\n");
    printf("Carta:%d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}