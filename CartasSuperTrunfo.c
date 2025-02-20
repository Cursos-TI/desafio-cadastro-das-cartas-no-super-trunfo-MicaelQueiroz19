#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


// Define variáveis separadas para cada atributo da cidade.
char codigoCidade[20];
char estado[20];
char nomeCidade[20];
int populacao;
float area;
float pib;
int pontosturisticos;

// Cadastro das Cartas:
void cadastrarCartas(){
    FILE *arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");}
    
    printf("Cadastrar a Cidade.\n\n");
    char letra = 72; // Contador para sequência de letras de codigoCidade (65 é a referência a letra A da tabela ASCII).
    int contador = 1; // Contador para sequencia de números de codigoCidade.

    // Os 2 while serve para estruturar a sequencia de A01 até H04.
    while (letra < 73) { // verifica se a letra da variável é < "I". (Conta de A até H).
        while (contador < 5) { // (Conta de 1 até 4).
            sprintf(codigoCidade, "%c0%d", letra, contador); // Concatena letra e contador.
            printf("Código da Cidade: %s\n", codigoCidade);
            printf("Estado: ");
            fgets(estado, sizeof(estado), stdin);
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
            
            // Remove o \n ou ENTER no final da variavel estado e nomeCidade.
            estado[strcspn(estado, "\n")] = '\0';
            nomeCidade[strcspn(nomeCidade, "\n")] = '\0';

            // Escreve as informações no arquivo dados.txt
            fprintf(arquivo, "%s\n", codigoCidade);
            fprintf(arquivo, "%s\n", estado);
            fprintf(arquivo, "%s\n", nomeCidade);
            fprintf(arquivo, "%d\n", populacao);
            fprintf(arquivo, "%.2f\n", area);
            fprintf(arquivo, "%.2f\n", pib);
            fprintf(arquivo, "%d\n\n", pontosturisticos);
            printf("-- Carta Cadastrada! --\n\n");

            getchar(); // Limpa variáveis
            contador ++;  // Adiciona mais 1 na contagem
        }
    letra++; // Adiciona mais 1 letra na sequência.
    }
fclose(arquivo);}

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

void consultarCartas(){
    char codigoCidade1[4];
    char estado1[20], nomeCidade1[20], populacaox1[20], pontosturisticosx1[20], areax1[20], pibx1[20];
    int populacao1, pontosturisticos1;
    float area1, pib1;
    printf("Digite o código da primeira carta: ");
    scanf("%3s", codigoCidade1);

    FILE *arquivo = fopen("dados.txt", "r"); // Abre arquivo dados.txt
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    char linha[100];
    int nLinha = 0, encontrou = 0;
    while (fgets(linha, sizeof(linha), arquivo) != NULL) { // Procura a carta1 no arquivo dados.txt
        linha[strcspn(linha, "\n")] = 0; // Remove quebra de linha(\n) da variável
        if (strcmp(linha, codigoCidade1) == 0){ // compara o resultado da linha do .txt com a variavel codigoCarta1
            strcpy(codigoCidade1, linha); // Converte a variável localizada no .txt na variável codigoCarta1
            encontrou = 1; // 1 == informação localizada.
            break;
        }
        nLinha++;
    }
    if (encontrou == 0){ // Se Carta1 não localizada, fecha o arquivo dados.txt
        printf("Código não localizado.\n");
        fclose(arquivo); //
    }
    rewind(arquivo);
    int contador = 0;    
    while (fgets(linha, sizeof(linha), arquivo) != NULL){ // Procura demais informações ref a carta1 em dados.txt
        if (contador == nLinha + 1){
            strcpy(estado1, linha);
            estado1[strcspn(estado1, "\n")] = 0; // Remove quebra de linha
        } else if(contador == nLinha + 2){
            strcpy(nomeCidade1, linha);
            nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
        } else if(contador == nLinha + 3){
            strcpy(populacaox1, linha);
            populacao1 = atoi(populacaox1); // Converte a variável de String para Int
        } else if(contador == nLinha + 4){
            strcpy(areax1, linha);
            area1 = atof(areax1); // Converte a variável de String para Int
        } else if(contador == nLinha + 5){
            strcpy(pibx1, linha);
            pib1 = atof(pibx1); // Converte a variável de String para Int
        } else if(contador == nLinha + 6){
            strcpy(pontosturisticosx1, linha);
            pontosturisticos1 = atoi(pontosturisticosx1); // Converte a variável de String para Int
        } 
        contador++;
    }

    printf("Código da Cidade: %s\n", codigoCidade1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    


}


int main() {

    cadastrarCartas();
    //consultarCartas();


    
}

