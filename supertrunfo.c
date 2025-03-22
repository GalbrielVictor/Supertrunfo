#include <stdio.h>

int main(){
    char estado1[2], estado2[2];
    char codigo1[4], codigo2[4];
    char nomeCidade1[100], nomeCidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;
    int pontosTuristicos1, pontosTuristicos2;
    float superPoder1, superPoder2;

    printf("Digite o estado da primeira carta (MG, SP, RJ): ");
    scanf(" %s" , &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s" , codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o estado da segunda carta (MG, SP, RJ): ");
    scanf(" %s" , &estado2);
    printf("Digite o código da segunda carta (ex: A01): ");
    scanf("%s" , codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1.0 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1.0 / densidade2);

    printf("Comparação de Cartas:\n");
    printf("População: %s venceu\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: %s venceu\n", (pibpercapita1 > pibpercapita2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2");

    return 0;
}
