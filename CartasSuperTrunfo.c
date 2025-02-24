#include <stdio.h>

int main(){
    // Define as variáveis da carta1
    char estado1[20], codigo1[20], nomeCidade1[20];
    int populacao1, nPontosTuristicos1;
    float area1, pib1;

    // Define as variáveis da carta2
    char estado2[20], codigo2[20], nomeCidade2[20];
    int populacao2, nPontosTuristicos2;
    float area2, pib2;    

    // Cadastra a carta1
    printf("Bem Vindo ao Jogo SuperTrunfo.\n");
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

    // Cadastra a carta2
    printf("Bem Vindo ao Jogo SuperTrunfo.\n");
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
    
    // Exibe Carta1
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Polulação: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos1);

    // Exibe Carta2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Polulação: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos2);    


}