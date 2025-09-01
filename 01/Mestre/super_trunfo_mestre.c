#include <stdio.h>

int main () {

    // Declaração das variáveis carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    unsigned long int populacao1;
    int num_pts_turisticos1;
    float area1;
    float pib1;
    float dens_popul1;
    float pib_per_c1;

    // Declaração das variáveis carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    unsigned long int populacao2;
    int num_pts_turisticos2;
    float area2;
    float pib2;
    float dens_popul2;
    float pib_per_c2;

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

    // calculo da densidade populacional
    dens_popul1 = populacao1 / area1;

    // calculo do pib per capita
    pib_per_c1 = pib1 / populacao1;

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

    // calculo da densidade
    dens_popul2 = populacao2 / area2;

    // calculo do pib per capita
    pib_per_c2 = pib2 / populacao2;

    // carta 1
    printf("\nCarta 1:\n");
    printf(" Estado: %c\n", estado1);
    printf(" Código: %s\n", codigo1);
    printf(" Nome da Cidade: %s\n", cidade1);
    printf(" População: %d\n", populacao1);
    printf(" Área: %.2f km²\n", area1);
    printf(" PIB: %.2f bilhões de reais\n", pib1);
    printf(" Número de Pontos Turísticos: %d\n", num_pts_turisticos1);
    printf(" Densidade Populacional: %.2f hab/km²\n", dens_popul1);
    printf(" PIB per Capita: %.2f\n", pib_per_c1);

    // carta2
    printf("\nCarta 2:\n");
    printf(" Estado: %c\n", estado2);
    printf(" Código: %s\n", codigo2);
    printf(" Nome da Cidade: %s\n", cidade2);
    printf(" População: %d\n", populacao2);
    printf(" Área: %.2f km²\n", area2);
    printf(" PIB: %.2f bilhões de reais\n", pib2);
    printf(" Número de Pontos Turísticos: %d\n", num_pts_turisticos2);
    printf(" Densidade Populacional: %.2f hab/km²\n", dens_popul2);
    printf(" PIB per Capita: %.2f\n", pib_per_c2);


    // Resultado Comparação das Cartas
    printf("\nComparação de cartas:\n");
    printf("(1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence)\n");
    printf("População: Carta %d VENCEU\n", (populacao1 > populacao2));
    printf("Àrea: Carta %d VENCEU\n", (area1 > area2));
    printf("PIB: Carta %d VENCEU\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d VENCEU\n", (num_pts_turisticos1 > num_pts_turisticos2));
    printf("Densidade Populacional: Carta %d VENCEU\n", (dens_popul1 < dens_popul2));
    printf("PIB per Capita: Carta %d VENCEU\n", (pib_per_c1 > pib_per_c2));
    printf("Super Poder: Carta %d VENCEU\n", ((populacao1 + area1 + pib1 + pib_per_c1 + num_pts_turisticos1 + dens_popul1) > (populacao2 + area2 + pib2 + pib_per_c2 + num_pts_turisticos2 + dens_popul2)));

    return 0;
}