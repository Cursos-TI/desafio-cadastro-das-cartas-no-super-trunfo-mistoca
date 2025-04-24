#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Patrícia

int main() {
    // Variáveis
    char estado1[50];
    char estado2[50];
    char cod1[5];
    char cod2[5];
    char cidade1[50];
    char cidade2[50];
    int pop1, pop2, tur1, tur2;
    float area_km1, area_km2, pib1, pib2;

    // Cadastro de Informações da Carta 1:
    printf("Digite o estado da sua primeira carta:\n");
    scanf("%s", estado1);

    printf("Digite o código da primeira carta (letra do estado + número de 1 a 4):\n");
    scanf("%s", cod1);

    printf("Digite o nome da cidade da sua primeira carta:\n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da sua primeira carta:\n");
    scanf("%d", &pop1);

    printf("Digite a área da cidade em quilômetros quadrados da sua primeira carta:\n");
    scanf("%f", &area_km1);

    printf("Digite o Produto Interno Bruto da cidade, da sua primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade da sua primeira carta:\n");
    scanf("%d", &tur1);

    // Cadastro de Informações da Carta 2:
    printf("Digite o estado da sua segunda carta:\n");
    scanf("%s", estado2);

    printf("Digite o código da segunda carta (letra do estado + número de 1 a 4):\n");
    scanf("%s", cod2);

    printf("Digite o nome da cidade da sua segunda carta:\n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da sua segunda carta:\n");
    scanf("%d", &pop2);

    printf("Digite a área da cidade em quilômetros quadrados da sua segunda carta:\n");
    scanf("%f", &area_km2);

    printf("Digite o Produto Interno Bruto da cidade, da sua segunda carta:\n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos na cidade da sua segunda carta:\n");
    scanf("%d", &tur2);

    // Impressão das Cartas:

    //Imprimi informações CARTA 1
    printf("\nCARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area_km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);

    //Imprimi informações CARTA 2
    printf("\nCARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);


    return 0;
}
