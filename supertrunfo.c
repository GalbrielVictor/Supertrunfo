#include <stdio.h>
int main(){
    //variaveis utilizadas com nomes significativos: 
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;
    int pontosTuristicos1, pontosTuristicos2;

//informações e capturas das mesmas para a primeira carta:
printf("Digite o estado da primeira carta (A-H): \n");
scanf(" %c" , &estado1);
printf("Digite o código da primeira carta (ex: A01): \n");
scanf ("%s" , &codigo1);
printf("Digite o nome da cidade da primeira carta: \n");
scanf ("%s", &nomeCidade1);
printf("Digite a população da cidade: \n");
scanf("%d", &populacao1);
printf("Digite a área da cidade (em km²): \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);
printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontosTuristicos1);

//informações e capturas das mesmas para a segunda carta:
printf("Digite o estado da segunda carta (A-H): \n");
scanf(" %c" , &estado2);
printf("Digite o código da segunda carta (ex: A01): \n");
scanf ("%s" , &codigo2);
printf("Digite o nome da cidade da segunda carta: \n");
scanf ("%s", &nomeCidade2);
printf("Digite a população da cidade: \n");
scanf("%d", &populacao2);
printf("Digite a área da cidade (em km²): \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);
printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontosTuristicos2);

//calculando a densidade demográfica da carta 1 e carta 2
densidade1 = (populacao1 / area1);
densidade2 = (populacao2 / area2);

//calculando o pib per capita da carta 1 e carta 2
pibpercapita1 = (pib1 / populacao1);
pibpercapita2 = (pib2 / populacao2);


//Exibição das informações da primeira carta
printf("Carta 01:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Area: %f km²\n", area1);
printf("Pib: %f bilhões de reais\n", pib1);
printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
printf("Densidade demográfica: %f\n", densidade1);
printf("Pib per capita: %f\n", pibpercapita1);

//Exibição das informações da segunda carta
printf("Carta 02:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Area: %f km²\n", area2);
printf("Pib: %f bilhões de reais\n", pib2);
printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
printf("Densidade demográfica: %f\n", densidade2);
printf("Pib per capita: %f\n", pibpercapita2);



return 0;   
}
