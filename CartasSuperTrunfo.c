#include <stdio.h>

int main() {
    char state;
    char code[4];
    char city[50];
    int population;
    float area;
    float pib;
    int turisticPoints;
    float pibPerCapita;
    float populationDensity;

    printf("Digite o estado (A - H):\n");
    scanf(" %c", &state);

    printf("Digite o código (A01, B02...):\n");
    scanf(" %3s", code);

    printf("Digite a cidade:\n");
    scanf(" %49[^\n]", city);

    printf("Digite a população:\n");
    scanf("%d", &population);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticPoints);

    pibPerCapita = pib / population;
    populationDensity = population / area;

    // Second card
    char state1;
    char code1[4];
    char city1[50];
    int population1;
    float area1;
    float pib1;
    int turisticPoints1;
    float pibPerCapita1;
    float populationDensity1;

    printf("Digite o estado (A - H):\n");
    scanf(" %c", &state1);

    printf("Digite o código (A01, B02...):\n");
    scanf(" %3s", code1);

    printf("Digite a cidade:\n");
    scanf(" %49[^\n]", city1); 

    printf("Digite a população:\n");
    scanf("%d", &population1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticPoints1);

    pibPerCapita1 = pib1 / population1;
    populationDensity1 = population1 / area1;

    printf("Carta 1:\n\tEstado: %c\n\tCódigo: %s\n\tCidade: %s\n\t"
           "População: %d\n\tÁrea: %.2f km²\n\tPIB: %.2f reais\n\t"
           "Pontos Turísticos: %d\n\tDensidade Populacional: %.2f hab./km²\n\t"
           "PIB/Capita: %.2f reais.\n\n",
           state, code, city, population, area, pib, turisticPoints,
           populationDensity, pibPerCapita);
    
    printf("Carta 2:\n\tEstado: %c\n\tCódigo: %s\n\tCidade: %s\n\t"
           "População: %d\n\tÁrea: %.2f km²\n\tPIB: %.2f reais\n\t"
           "Pontos Turísticos: %d\n\tDensidade Populacional: %.2f hab./km²\n\t"
           "PIB/Capita: %.2f reais.\n\n", 
           state1, code1, city1, population1, area1, pib1, turisticPoints1, 
           populationDensity1, pibPerCapita1);

    return 0;
}