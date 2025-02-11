#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
int populacao, pontos_turisticos;
float area, pib;
char carta[4];
char estados[3] = {'A','B','C','D','E','F','G','H'};


// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
void cadastrar_cartas(){

    // Abre aquivo .txt para salvar cartas
    FILE *arquivo = fopen("dados.txt", "w");
    if (arquivo==NULL) {
        printf("Erro ao abrir o arquivo");
    }
    

    for (int j = 0; j < 2; j++) { // 
        for (int i = 0; i < 4; i++){
            snprintf(carta, sizeof(carta), "%c%02d", estados[j], i+1);
            printf("\nCarta: %s\n", carta);
            printf("População: "); // Mensagem
            scanf("%d", &populacao); // Solicita ao usuário que insira a população.
            printf("Área: "); // Mensagem
            scanf("%f", &area); // Solicita ao usuário que insira a área.
            printf("PIB: "); // Mensagem
            scanf("%f", &pib); // Solicita ao usuário que insira o PIB.
            printf("Número de pontos turísticos: "); // Mensagem
            scanf("%d", &pontos_turisticos); // Solicita ao usuário que insira os pontos turisticos.
            float densidade = populacao / area;
            printf("Densidade Populacional: %.2f\n", densidade);
            float pib_per_capita = pib / populacao;
            printf("PIB per Capita: %.2f\n", pib_per_capita);
            double super_poder = populacao + area + pib + pontos_turisticos + densidade + pib_per_capita;
            printf("Super Poder: %.2f\n", super_poder);


            // Escrever no arquivo
            fprintf(arquivo, "Carta: %s\n", carta);
            fprintf(arquivo, "População: %d\n", populacao);
            fprintf(arquivo, "Área: %.2f\n", area);
            fprintf(arquivo, "PIB: %.2f\n", pib);
            fprintf(arquivo, "Número de pontos turísticos: %d\n", pontos_turisticos);
            fprintf(arquivo, "Densidade Populacional: %.2f\n", densidade);
            fprintf(arquivo, "PIB per Capita: %.2f\n", pib_per_capita);
            fprintf(arquivo, "Super Poder: %.2f\n\n", super_poder);
        }
    }

    fclose(arquivo);
    printf("\nCartas Salvas!\n");
}

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.
void consultar_cartas(){
    // Abre arquivo dados.
    FILE *arquivo = fopen("dados.txt", "r");

    // Verificar se o arquivo foi aberto corretamente.
    if (arquivo == NULL) {
        printf("Erro: O arquivo não pôde ser aberto!\n");
    }
    // Lê o conteúdo do arquivo linha por linha
    char linha[100]; // buffer para armazenar cada linha.
    while (fgets(linha,sizeof(linha), arquivo) != NULL) {
        printf("%s", linha); // Imprime cada linha lida do arquivo
    }
    
}



#define MAX_LINHA 100

void jogar_cartas() {
    char primeira_carta[4], segunda_carta[4];

    printf("Vamos começar o jogo!\n");
    printf("Selecione a primeira carta (Ex: A01): ");
    scanf("%3s", primeira_carta);
    printf("Selecione a segunda carta (Ex: B01): ");
    scanf("%3s", segunda_carta);

    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    char linha[MAX_LINHA];
    int encontrou_primeira = 0, encontrou_segunda = 0;

    // Inicializando os valores
    int populacao_carta1 = -1, populacao_carta2 = -1;
    float area_carta1 = -1.0, area_carta2 = -1.0;
    float pib_carta1 = -1.0, pib_carta2 = -1.0;
    int pontos_turisticos_carta1 = -1, pontos_turisticos_carta2 = -1;
    float densidade_carta1 = -1.0, densidade_carta2 = -1.0;
    float per_capita_carta1 = -1.0, per_capita_carta2 = -1.0;
    float super_poder_carta1 = -1.0, super_poder_carta2 = -1.0;

    // Percorrendo o arquivo apenas uma vez
    while (fgets(linha, MAX_LINHA, arquivo)) {
        if (strstr(linha, "Carta:") != NULL) {
            char carta_atual[4];
            sscanf(linha, "Carta: %s", carta_atual);

            // Verifica se encontrou uma das cartas
            if (strcmp(carta_atual, primeira_carta) == 0) {
                encontrou_primeira = 1;
            } else if (strcmp(carta_atual, segunda_carta) == 0) {
                encontrou_segunda = 1;
            } else {
                // Se encontrou uma nova carta, termina a coleta dos dados anteriores
                encontrou_primeira = 0;
                encontrou_segunda = 0;
            }
        }

        // Coleta os dados da carta encontrada
        if (encontrou_primeira || encontrou_segunda) {
            int *populacao = encontrou_primeira ? &populacao_carta1 : &populacao_carta2;
            float *area = encontrou_primeira ? &area_carta1 : &area_carta2;
            float *pib = encontrou_primeira ? &pib_carta1 : &pib_carta2;
            int *pontos_turisticos = encontrou_primeira ? &pontos_turisticos_carta1 : &pontos_turisticos_carta2;
            float *densidade = encontrou_primeira ? &densidade_carta1 : &densidade_carta2;
            float *per_capita = encontrou_primeira ? &per_capita_carta1 : &per_capita_carta2;
            float *super_poder = encontrou_primeira ? &super_poder_carta1 : &super_poder_carta2;

            if (sscanf(linha, "População: %d", populacao) == 1) {}
            else if (sscanf(linha, "Área: %f", area) == 1) {}
            else if (sscanf(linha, "PIB: %f", pib) == 1) {}
            else if (sscanf(linha, "Número de pontos turísticos: %d", pontos_turisticos) == 1) {}
            else if (sscanf(linha, "Densidade Populacional: %f", densidade) == 1) {}
            else if (sscanf(linha, "PIB per Capita: %f", per_capita) == 1) {}
            else if (sscanf(linha, "Super Poder: %f", super_poder) == 1) {}
        }
    }

    fclose(arquivo);

    // Exibir os valores das cartas lidas
    printf("\n--- Comparação de Cartas (%s e %s) ---\n", primeira_carta, segunda_carta);
    printf("População: %d vs %d\n", populacao_carta1, populacao_carta2);
    printf("Área: %.2f vs %.2f\n", area_carta1, area_carta2);
    printf("PIB: %.2f vs %.2f\n", pib_carta1, pib_carta2);
    printf("Pontos turísticos: %d vs %d\n", pontos_turisticos_carta1, pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f vs %.2f\n", densidade_carta1, densidade_carta2);
    printf("PIB per Capita: %.2f vs %.2f\n", per_capita_carta1, per_capita_carta2);
    printf("Super Poder: %.2f vs %.2f\n\n", super_poder_carta1, super_poder_carta2);

    // Comparação de População (Maior valor vence)
    if (populacao_carta1 > populacao_carta2) {
        printf("\nA primeira carta (%s) vence em População!\n", primeira_carta);
    } else if (populacao_carta1 < populacao_carta2) {
        printf("A segunda carta (%s) vence em População!\n", segunda_carta);
    } else {
        printf("Empate em População!\n");
    }

    // Comparação de Área (Maior valor vence)
    if (area_carta1 > area_carta2) {
        printf("A primeira carta (%s) vence em Área!\n", primeira_carta);
    } else if (area_carta1 < area_carta2) {
        printf("A segunda carta (%s) vence em Área!\n", segunda_carta);
    } else {
        printf("Empate em Área!\n");
    }

    // Comparação de PIB (Maior valor vence)
    if (pib_carta1 > pib_carta2) {
        printf("A primeira carta (%s) vence em PIB!\n", primeira_carta);
    } else if (pib_carta1 < pib_carta2) {
        printf("A segunda carta (%s) vence em PIB!\n", segunda_carta);
    } else {
        printf("Empate em PIB!\n");
    }

    // Comparação de Pontos Turísticos (Maior valor vence)
    if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
        printf("A primeira carta (%s) vence em Pontos Turísticos!\n", primeira_carta);
    } else if (pontos_turisticos_carta1 < pontos_turisticos_carta2) {
        printf("A segunda carta (%s) vence em Pontos Turísticos!\n", segunda_carta);
    } else {
        printf("Empate em Pontos Turísticos!\n");
    }

    // Comparação de Densidade Populacional (Menor valor vence)
    if (densidade_carta1 < densidade_carta2) {
        printf("A primeira carta (%s) vence em Densidade Populacional!\n", primeira_carta);
    } else if (densidade_carta1 > densidade_carta2) {
        printf("A segunda carta (%s) vence em Densidade Populacional!\n", segunda_carta);
    } else {
        printf("Empate em Densidade Populacional!\n");
    }

    // Comparação de PIB per Capita (Maior valor vence)
    if (per_capita_carta1 > per_capita_carta2) {
        printf("A primeira carta (%s) vence em PIB per Capita!\n", primeira_carta);
    } else if (per_capita_carta1 < per_capita_carta2) {
        printf("A segunda carta (%s) vence em PIB per Capita!\n", segunda_carta);
    } else {
        printf("Empate em PIB per Capita!\n");
    }

    // Comparação de Super Poder (Maior valor vence)
    if (super_poder_carta1 > super_poder_carta2) {
        printf("A primeira carta (%s) vence em Super Poder!\n", primeira_carta);
    } else if (super_poder_carta1 < super_poder_carta2) {
        printf("A segunda carta (%s) vence em Super Poder!\n", segunda_carta);
    } else {
        printf("Empate em Super Poder!\n");
    }
}

int main() {
    char escolha[20];

    printf("Bem Vindo ao Jogo Super Trunfo (Tema: Paises)\n");
    printf("O que deseja fazer com as Cartas? (Jogar/Consultar/Cadastrar):");
    scanf("%s", escolha);

    if (strcmp(escolha, "Jogar") == 0){
        jogar_cartas();
    } else if (strcmp(escolha, "Cadastrar") == 0){
        cadastrar_cartas();
    } else if (strcmp(escolha, "Consultar") == 0){
        consultar_cartas();
    } else {
        printf("Opção inválida! Reinicie o Jogo e escolha entre 'Jogar', 'Cadastrar' ou 'Consultar'.\n");
    }


    return 0;
}
