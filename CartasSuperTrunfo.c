#include <stdio.h>
#include <string.h>

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
    char codigoCidade1[4] = "H01";
    char estado1[20], nomeCidade1[20], populacao1[20], pontosturisticos1[20], area1[20], pib1[20];

    FILE *arquivo = fopen("dados.txt", "r"); // Abre arquivo dados.txt
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    char linha[100];
    int nLinha = 0;
    while (fgets(linha, sizeof(linha), arquivo) != NULL) { // Procura a carta1 no arquivo dados.txt
        if (strstr(linha, codigoCidade1) != NULL){
            strcpy(codigoCidade1, linha);
            break;
        }
    }
    rewind(arquivo);
    int contador = 0;    
    while (fgets(linha, sizeof(linha), arquivo) != NULL){ // Procura demais informações ref a carta1 em dados.txt
        if (contador == nLinha){
            strcpy(estado1, linha);
        } else if (contador == nLinha + 1){
            strcpy(nomeCidade1, linha);
        } else if (contador == nLinha + 2){
            strcpy(populacao1, linha);
        } else if (contador == nLinha + 3){
            strcpy(area1, linha);
        } else if (contador == nLinha + 4){
            strcpy(pib1, linha);
        } else if (contador == nLinha + 5){
            strcpy(pontosturisticos1, linha);
        }
        int populacao1 = populacao1;
        float area1 = area1;
        float pib1 = pib1;
        contador++;
    }



    char codigoCidade2[4] = "H02";
    char estado2[20], nomeCidade2[20], populacao2[20], pontosturisticos2[20], area2[20], pib2[20];  

    nLinha = 0;
    while (fgets(linha, sizeof(linha), arquivo) != NULL) { // Procura a carta2 no arquivo dados.txt
        if (strstr(linha, codigoCidade2) != NULL){
            strcpy(codigoCidade2, linha);
            break;
        }
    }
    rewind(arquivo);
    contador = 0;    
    while (fgets(linha, sizeof(linha), arquivo) != NULL){ // Procura demais informações ref a carta2 em dados.txt
        if (contador == nLinha){
            strcpy(estado2, linha);
        } else if (contador == nLinha + 1){
            strcpy(nomeCidade2, linha);
        } else if (contador == nLinha + 2){
            strcpy(populacao2, linha);
        } else if (contador == nLinha + 3){
            strcpy(area2, linha);
        } else if (contador == nLinha + 4){
            strcpy(pib2, linha);
        } else if (contador == nLinha + 5){
            strcpy(pontosturisticos2, linha);}
        int populacao2 = populacao2;
        float area2 = area2;
        float pib2 = pib2;
        contador++;
    }

}


int main() {

    //cadastrarCartas();
    consultarCartas();
    
}

