#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char carta[4] = "A01";
    int populacao, pontos_turisticos;
    float area, pib;

    char estados[10] = {'A','B'};
    for (int i = 0; i < 4; i++){

        printf("Carta: %d\n", i+1);
        printf("População: "); // Mensagem
        scanf("%d", &populacao); // Solicita ao usuário que insira a população.
        printf("Área: "); // Mensagem
        scanf("%f", &area); // Solicita ao usuário que insira a área.
        printf("PIB: "); // Mensagem
        scanf("%f", &pib); // Solicita ao usuário que insira o PIB.
        printf("Número de pontos turísticos: "); // Mensagem
        scanf("%d", &pontos_turisticos); // Solicita ao usuário que insira os pontos turisticos.
    }
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //printf("População: \n"); // Mensagem
    //scanf("%d", &populacao); // Solicita ao usuário que insira a população.
    //printf("Área: \n"); // Mensagem
    //scanf("%f", &area); // Solicita ao usuário que insira a área.
    //printf("PIB: \n"); // Mensagem
    //scanf("%f", &pib); // Solicita ao usuário que insira o PIB.
    //printf("Número de pontos turísticos: \n"); // Mensagem
    //scanf("%d", &pontos_turisticos); // Solicita ao usuário que insira os pontos turisticos.


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta: %s\n", carta);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos: %d\n", pontos_turisticos);

    return 0;
}
