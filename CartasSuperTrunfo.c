#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
char estado[20];
char codigoCidade[20];
char nomeCidade[20];
int populacao;
float area;
float pib;
int pontosturisticos;


// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
void cadastrarCartas(){
    printf("Cadastrar a Cidade.\n\n");

    int contador = 0;
    while (contador < 4) {
        contador ++;
        printf("Estado: ");
        fgets(estado, sizeof(estado), stdin);
        printf("Código da Cidade: %s", codigoCidade);
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
        
    }

}


// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.


int main() {

    cadastrarCartas();
    
}