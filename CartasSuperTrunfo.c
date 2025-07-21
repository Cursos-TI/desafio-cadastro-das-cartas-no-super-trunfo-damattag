#include <stdio.h>

float calculatePopulationDensity(unsigned long int population, float area) {
    return population / area;
};

float calculatePibPerCapita(float pib, unsigned long int population) {
    return pib / population;
};

float calculatePower(float area, float pib, int turisticPoints, float pibPerCapita, float populationDensity, float population) {
    return area + pib + turisticPoints + (1.0 / populationDensity) + pibPerCapita + population;
};

int main() {
    char state;
    char code[4];
    char city[50];
    unsigned long int population;
    float area;
    float pib;
    int turisticPoints;
    float pibPerCapita;
    float populationDensity;
    float power;

    printf("Digite o estado (A - H):\n");
    scanf(" %c", &state);

    printf("Digite o código (A01, B02...):\n");
    scanf(" %3s", code);

    printf("Digite a cidade:\n");
    scanf(" %49[^\n]", city);

    printf("Digite a população:\n");
    scanf("%ld", &population);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticPoints);

    pibPerCapita = calculatePibPerCapita(pib, population);
    populationDensity = calculatePopulationDensity(population, area);

    power = calculatePower(area, pib, turisticPoints, pibPerCapita, populationDensity, population);
    printf("Super Poder: %f\n", power);

    // Second card
    char state1;
    char code1[4];
    char city1[50];
    unsigned long int population1;
    float area1;
    float pib1;
    int turisticPoints1;
    float pibPerCapita1;
    float populationDensity1;
    float power1;

    printf("Digite o estado (A - H):\n");
    scanf(" %c", &state1);

    printf("Digite o código (A01, B02...):\n");
    scanf(" %3s", code1);

    printf("Digite a cidade:\n");
    scanf(" %49[^\n]", city1); 

    printf("Digite a população:\n");
    scanf("%ld", &population1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticPoints1);

    pibPerCapita1 = calculatePibPerCapita(pib1, population1);
    populationDensity1 = calculatePopulationDensity(population1, area1);

    power1 = calculatePower(area1, pib1, turisticPoints1, pibPerCapita1, populationDensity1, population1);
    printf("Super Poder: %f\n", power1);

    printf("Carta 1:\n\tEstado: %c\n\tCódigo: %s\n\tCidade: %s\n\t"
           "População: %ld\n\tÁrea: %.2f km²\n\tPIB: %.2f reais\n\t"
           "Pontos Turísticos: %d\n\tDensidade Populacional: %.2f hab./km²\n\t"
           "PIB/Capita: %.2f reais.\n\n",
           state, code, city, population, area, pib, turisticPoints,
           populationDensity, pibPerCapita);
    
    printf("Carta 2:\n\tEstado: %c\n\tCódigo: %s\n\tCidade: %s\n\t"
           "População: %ld\n\tÁrea: %.2f km²\n\tPIB: %.2f reais\n\t"
           "Pontos Turísticos: %d\n\tDensidade Populacional: %.2f hab./km²\n\t"
           "PIB/Capita: %.2f reais.\n\n", 
           state1, code1, city1, population1, area1, pib1, turisticPoints1, 
           populationDensity1, pibPerCapita1);


    printf("Comparação de Cartas:\n\n");

    if (population > population1) {
        printf("População: Carta 1 venceu (%d)\n", population > population1);
    } else {
        printf("População: Carta 2 venceu (%d)\n", population > population1);
    }

    if (area > area1) {
        printf("Área: Carta 1 venceu (%d)\n", area > area1);
    } else {
        printf("Área: Carta 2 venceu (%d)\n", area > area1);
    }

    if (pib > pib1) {
        printf("PIB: Carta 1 venceu (%d)\n", pib > pib1);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", pib > pib1);
    }

    if (turisticPoints > turisticPoints1) {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticPoints > turisticPoints1);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", turisticPoints > turisticPoints1);
    }

    if (populationDensity > populationDensity1) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", populationDensity > populationDensity1);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", populationDensity > populationDensity1);
    }

    if (pibPerCapita > pibPerCapita1) {
        printf("PIB/Capita: Carta 1 venceu (%d)\n", pibPerCapita > pibPerCapita1);
    } else {
        printf("PIB/Capita: Carta 2 venceu (%d)\n", pibPerCapita > pibPerCapita1);
    }

    if (power > power1) {
        printf("Super Poder: Carta 1 venceu (%d)\n", power > power1);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", power > power1);
    }


    return 0;
}