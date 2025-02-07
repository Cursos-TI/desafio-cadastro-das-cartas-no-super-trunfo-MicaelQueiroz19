#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado[50], codigo_carta[50], nome_cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Estado
    printf("Insira o nome do Estado: (Ex: São_Paulo)\n");
    scanf("%s", estado);
    // Código da Carta
    printf("Insira o Código da Carta: (Ex: A01)\n");
    scanf("%s", codigo_carta);
    // Nome da Cidade
    printf("Insira o Nome da Cidade: (Ex: São_Paulo)\n");
    scanf("%s", nome_cidade);    
    // População
    printf("Insira a População da Cidade: (Ex: 3000)\n");
    scanf("%d", &populacao);
    // Área da Cidade
    printf("Insira o Área da Cidade: (Ex: 2000.55)\n");
    scanf("%f", &area);
    // PIB da Cidade
    printf("Insira o PIB da Cidade: (Ex: 4000.33)\n");
    scanf("%f", &pib);
    // Número de Pontos Turisticos da Cidade
    printf("Insira o Número de Pontos Turisticos da Cidade: (Ex: 50)\n");
    scanf("%d", &pontos_turisticos);


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População da Cidade: %d\n", populacao);
    printf("Área da Cidade: %.2f\n", area);
    printf("PIB da Cidade: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;
}
