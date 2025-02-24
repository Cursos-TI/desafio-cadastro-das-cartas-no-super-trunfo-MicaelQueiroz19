#include <stdio.h>

int main(){
    // Define as variáveis da carta1
    char estado1[20], codigo1[20], nomeCidade1[20];
    int populacao1, nPontosTuristicos1;
    float area1, pib1, densidade1, pibperCapita1;

    // Define as variáveis da carta2
    char estado2[20], codigo2[20], nomeCidade2[20];
    int populacao2, nPontosTuristicos2;
    float area2, pib2, densidade2, pibperCapita2;    

    // Cadastra a carta1
    printf("Bem Vindo ao Jogo SuperTrunfo.\n");
    printf("Vamos começar com a Carta1\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a Polulação: ");
    scanf("%d", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1); 
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &nPontosTuristicos1);

    //Calcula densidade e PIB per Capita da Carta1
    densidade1 = area1 / populacao1;
    pibperCapita1 = pib1 / populacao1;


    // Cadastra a carta2
    printf("\n\nAgora, vamos para a Carta2\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a Polulação: ");
    scanf("%d", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2); 
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &nPontosTuristicos2);

    //Calcula densidade e PIB per Capita da Carta2
    densidade2 = area2 / populacao2;
    pibperCapita2 = pib2 / populacao2;

    
    // Exibe Carta1
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Polulação: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pib1);

    // Exibe Carta2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Polulação: %d km²\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);   


}