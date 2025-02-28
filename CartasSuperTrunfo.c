#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char carta1_estado[24],carta2_estado[24];
    char carta1_codigo[24],carta2_codigo[24];
    char carta1_cidade[24],carta2_cidade[24];
    int carta1_populacao,carta2_populacao;
    int carta1_turistas,carta2_turistas;
    float carta1_area,carta2_area;
    float carta1_pib,carta2_pib;
    float carta1_pib_capital, carta2_pib_capital;
    float carta1_densidade_populacao, carta2_densidade_populacao;

    printf("Bem vindo ao jogo Super Trunfo\n");
    printf("Insira os dados da carta\n");
    printf("CARTA 1\n");

    // INSERIR CARTA 1
    printf("Estado:");
    scanf("%s", &carta1_estado);
    printf("Codigo:");
    scanf("%s", &carta1_codigo);
    printf("Cidade:");
    scanf("%s", &carta1_cidade);
    printf("Populacao:");
    scanf("%d", &carta1_populacao);
    printf("Area:");
    scanf("%f", &carta1_area);
    printf("PIB:");
    scanf("%f", &carta1_pib);
    printf("Numero de Pontos Turisticos:");
    scanf("%d", &carta1_turistas);
    
    // INSERIR CARTA 2

    printf("\n");
    printf("Estado:");
    scanf("%s", &carta2_estado);
    printf("Codigo:");
    scanf("%s", &carta2_codigo);
    printf("Cidade:");
    scanf("%s", &carta2_cidade);
    printf("Populacao:");
    scanf("%d", &carta2_populacao);
    printf("Area:");
    scanf("%f", &carta2_area);
    printf("PIB:");
    scanf("%f", &carta2_pib);
    printf("Numero de Pontos Turisticos:");
    scanf("%d", &carta2_turistas);

    printf("\n-------------------------------------------------------\n");
    
    // mostrar carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n",carta1_estado);
    printf("Codigo: %s\n",carta1_codigo);
    printf("Cidade: %s\n",carta1_cidade);
    printf("Populacao: %d\n",carta1_populacao);
    printf("Area: %f\n",carta1_area);
    printf("PIB: %f\n",carta1_pib);
    printf("Numero de Pontos Turisticos: %d\n",carta1_turistas);

    // mostrar carta 2
    printf("\n\nCarta 2:\n");
    printf("Estado: %s\n",carta2_estado);
    printf("Codigo: %s\n",carta2_codigo);
    printf("Cidade: %s\n",carta2_cidade);
    printf("Populacao: %d\n",carta2_populacao);
    printf("Area: %f\n",carta2_area);
    printf("PIB: %f\n",carta2_pib);
    printf("Numero de Pontos Turisticos: %d\n",carta2_turistas);

    return 0;
}
