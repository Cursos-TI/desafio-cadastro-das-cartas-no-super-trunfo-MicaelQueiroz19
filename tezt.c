#include <stdio.h>

int main(){
    // Define as variáveis da carta1
    int nPontosTuristicos1 = 3;
    float area1 = 20, pib1 = 20, densidade1, pibperCapita1, superPoder1;
    unsigned long int populacao1 = 30;

    // Define as variáveis da carta2
    int nPontosTuristicos2 = 2;
    float area2 = 30, pib2 = 20, densidade2, pibperCapita2, superPoder2;
    unsigned long int populacao2 = 50;  

    //Calcula densidade e PIB per Capita da Carta1
    densidade1 = area1 / populacao1;
    pibperCapita1 = pib1 / populacao1;
    //Calcular Super Poder da Carta1
    superPoder1 = (populacao1 + area1 + pib1 + nPontosTuristicos1 + pibperCapita1 + (-densidade1));

    //Calcula densidade e PIB per Capita da Carta2
    densidade2 = area2 / populacao2;
    pibperCapita2 = pib2 / populacao2;
    //Calcular Super Poder da Carta2
    superPoder2 = (populacao2 + area2 + pib2 + nPontosTuristicos2 + pibperCapita2 + (-densidade2));

    // Comparação de Cartas
    int nPontosTuristicos;
    float area, pib, densidade, pibperCapita, superPoder;
    unsigned long int populacao;


    populacao = populacao1 > populacao2;
    area = area1 > area2;
    pib = pib1 > pib2;
    nPontosTuristicos = nPontosTuristicos1 > nPontosTuristicos2;
    densidade = densidade1 < densidade2;
    pibperCapita = pibperCapita1 > pibperCapita2;
    superPoder = superPoder1 > superPoder2;

    printf("d1 %f\n", densidade1);
    printf("d2 %f\n", densidade2);


    printf("Comparação de Cartas:\n");
    printf("População: Carta %lu venceu (%d)\n", ((populacao + 3) % 2 + 1), (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (((int)area + 3) % 2 + 1), (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (((int)pib + 3) % 2 + 1), (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", ((nPontosTuristicos + 3) % 2 + 1), (nPontosTuristicos1 > nPontosTuristicos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (((int)densidade + 3) % 2 + 1), (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (((int)pibperCapita + 3) % 2 + 1), (pibperCapita1 > pibperCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (((int)superPoder + 3) % 2 + 1), (superPoder1 > superPoder2));



}