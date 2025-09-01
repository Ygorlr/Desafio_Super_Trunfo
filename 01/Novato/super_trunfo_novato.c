#include <stdio.h>

int main () {

    // Declaração das variáveis carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    int num_pts_turisticos1;
    float area1;
    float pib1;

    // Declaração das variáveis carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    int num_pts_turisticos2;
    float area2;
    float pib2;

    // lista de perguntas da primeira carta  
    printf("PRIMEIRA CARTA\n");

    printf("Digite uma letra para representar o estado da cidade (A à H): ");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado mais um número de 01 a 04. Código da carta (exemplo: A01, B02): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade (obs: sem utilizar espaços): ");
    scanf(" %s", cidade1);

    printf("Digite a população (exemplo: 12325000): ");
    scanf(" %d", &populacao1);

    printf("Digite a Área em (km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB (Em bilhões, com 12 números): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &num_pts_turisticos1);

    // lista de perguntas da segunda carta
    printf("\nSEGUNDA CARTA\n");
    
    printf("Digite uma letra para representar o estado da cidade (A à H): ");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado mais um número de 01 a 04. Código da carta (exemplo: A01, B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade (obs: sem utilizar espaços): ");
    scanf(" %s", cidade2);

    printf("Digite a população (exemplo: 12325000): ");
    scanf(" %d", &populacao2);

    printf("Digite a Área em (km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (Em bilhões, com 12 números): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &num_pts_turisticos2);

    // lista de exibição da carta 1
    printf("\nCarta 1:\n");
    printf(" Estado: %c\n", estado1);
    printf(" Código: %s\n", codigo1);
    printf(" Nome da Cidade: %s\n", cidade1);
    printf(" População: %d\n", populacao1);
    printf(" Área: %.2f km²\n", area1);
    printf(" PIB: %.2f bilhões de reais\n", pib1);
    printf(" Número de Pontos Turísticos: %d\n", num_pts_turisticos1);

    // lista de exibição da carta2
    printf("\nCarta 2:\n");
    printf(" Estado: %c\n", estado2);
    printf(" Código: %s\n", codigo2);
    printf(" Nome da Cidade: %s\n", cidade2);
    printf(" População: %d\n", populacao2);
    printf(" Área: %.2f km²\n", area2);
    printf(" PIB: %.2f bilhões de reais\n", pib2);
    printf(" Número de Pontos Turísticos: %d\n", num_pts_turisticos2);

    return 0;
}