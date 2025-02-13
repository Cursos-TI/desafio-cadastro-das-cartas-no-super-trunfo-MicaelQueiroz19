#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


// Define variáveis separadas para cada atributo da cidade.
char estado[20];
char codigoCidade[20];
char nomeCidade[20];
int populacao;
float area;
float pib;
int pontosturisticos;

// Cadastro das Cartas:
void cadastrarCartas(){
    printf("Cadastrar a Cidade.\n\n");
    char letra = 65; // Contador para sequência de letras de codigoCidade (65 é a referência a letra A da tabela ASCII).
    int contador = 1; // Contador para sequencia de números de codigoCidade.

    // Os 2 while serve para estruturar a sequencia de A01 até H04.
    while (letra < 73) { // verifica se a letra da variável é < "I". (Conta de A até H).
        while (contador < 5) { // (Conta de 1 até 4).
            sprintf(codigoCidade, "%c0%d", letra, contador); // Concatena letra e contador.
            printf("Estado: ");
            fgets(estado, sizeof(estado), stdin);
            printf("Código da Cidade: %s\n", codigoCidade);
            printf("Nome da Cidade: ");
            fgets(nomeCidade, sizeof(nomeCidade), stdin);
            printf("População: ");
            scanf("%d", &populacao);
            printf("Área em km²: ");
            scanf("%f", &area);
            printf("PIB: ");
            scanf("%f", &pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &pontosturisticos);
            printf("-- Carta Cadastrada! --\n\n");
            getchar();
            contador ++;  // Adiciona mais 1 na contagem
        }
    letra++; // Adiciona mais 1 letra na sequência.
    }
}


// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.



int main() {

    //cadastrarCartas();

    
}

