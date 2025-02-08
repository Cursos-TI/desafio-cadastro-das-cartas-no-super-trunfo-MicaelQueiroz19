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
char estados[3] = {'A','B'};


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
            fprintf(arquivo, "Super Poder:: %.2f\n\n", super_poder);
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


int main() {
    char escolha[20];

    printf("Bem Vindo ao Jogo Super Trunfo (Tema: Paises)\n");
    printf("O que deseja fazer com as Cartas? (Consultar/Cadastrar):");
    scanf("%s", escolha);

    if (strcmp(escolha, "Cadastrar") == 0){
        cadastrar_cartas();
    } else if (strcmp(escolha, "Consultar") == 0){
        consultar_cartas();
    } else {
        printf("Opção inválida! Reinicie o Jogo e escolha entre 'Cadastrar' ou 'Consultar'.\n");
    }


    return 0;
}
