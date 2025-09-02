#include <stdio.h>

int main () {
    // variaveis globais
    int escolhaUsuario1, escolhaUsuario2, resultado;

    // Declaração das variáveis carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    int num_pts_turisticos1;
    float area1;
    float pib1;
    float dens_popul1;
    float pib_per_c1;

    // Declaração das variáveis carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
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

    // lista de exibição da carta 1
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

    // lista de exibição da carta2
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

    // menu interativo lista para escolha do atributo para comparação
    printf("\nEscolha o primeiro atributo para comparação da carta 1 com a carta 2!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha um número: ");
    scanf("%d", &escolhaUsuario1);

    // estrutura de escolha por número para o primeiro atributo de comparação (switch)
    switch (escolhaUsuario1) {
        case 1:
            printf("\nEscolha o segundo atributo para comparação da carta 1 com a carta 2!\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            break;
        case 2:
            printf("\nEscolha o segundo atributo para comparação da carta 1 com a carta 2!\n");
            printf("1. População\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            break;
        case 3:
            printf("\nEscolha o segundo atributo para comparação da carta 1 com a carta 2!\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            break;
        case 4:
            printf("\nEscolha o segundo atributo para comparação da carta 1 com a carta 2!\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("5. Densidade Populacional\n");
            break;
        case 5:
            printf("\nEscolha o segundo atributo para comparação da carta 1 com a carta 2!\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    // perguntando o usuário qual número ele quer digitar
    printf("Escolha um número: ");
    scanf("%d", &escolhaUsuario2);

    printf("\nNome da cidade da carta 1: %s\n", cidade1);
    printf("Nome da cidade da carta 2: %s\n", cidade2);

    // verificação se o usuário escolheu o mesmo atributo
    if (escolhaUsuario1 == escolhaUsuario2) {
        printf("Você escolheu o mesmo atributo!");
    } else {
        // estrutura de escolha por número para o segundo atributo de comparação (switch)
        switch (escolhaUsuario1) {
            case 1:
                printf("Atributo usado para primeira comparação: População\n");
                if (escolhaUsuario2 == 2) {
                    printf("Atributo usado para segunda comparação: Área\n");
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if ((populacao1 + area1) == (populacao2 + area2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (populacao1 + area1) > (populacao2 + area2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 3) {
                    printf("Atributo usado para segunda comparação: PIB\n");
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if ((populacao1 + pib1) == (populacao2 + pib2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (populacao1 + pib1) > (populacao2 + pib2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 4) {
                    printf("Atributo usado para segunda comparação: Pontos Turísticos\n");
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if ((populacao1 + num_pts_turisticos1) == (populacao2 + num_pts_turisticos2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (populacao1 + num_pts_turisticos1) > (populacao2 + num_pts_turisticos2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 5) {
                    printf("Atributo usado para segunda comparação: Densidade Populacional\n");
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if ((populacao1 + dens_popul1) == (populacao2 + dens_popul2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (populacao1 + dens_popul1) > (populacao2 + dens_popul2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                }
                break;
            case 2:
                printf("Atributo usado para primeira comparação: Área\n");
                if (escolhaUsuario2 == 1) {
                    printf("Atributo usado para segunda comparação: População\n");
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if ((area1 + populacao1) == (area2 + populacao2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (area1 + populacao1) > (area2 + populacao2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 3) {
                    printf("Atributo usado para segunda comparação: PIB\n");
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if ((area1 + pib1) == (area2 + pib2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (area1 + pib1) > (area2 + pib2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 4) {
                    printf("Atributo usado para segunda comparação: Pontos Turísticos\n");
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if ((area1 + num_pts_turisticos1) == (area2 + num_pts_turisticos2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (area1 + num_pts_turisticos1) > (area2 + num_pts_turisticos2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 5) {
                    printf("Atributo usado para segunda comparação: Densidade Populacional\n");
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if ((area1 + dens_popul1) == (area2 + dens_popul2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (area1 + dens_popul1) > (area2 + dens_popul2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                }
                break;
            case 3:
                printf("Atributo usado para primeira comparação: PIB\n");
                if (escolhaUsuario2 == 1) {
                    printf("Atributo usado para segunda comparação: População\n");
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if ((pib1 + populacao1) == (pib2 + populacao2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (pib1 + populacao1) > (pib2 + populacao2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 2) {
                    printf("Atributo usado para segunda comparação: Área\n");
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if ((pib1 + area1) == (pib2 + area2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (pib1 + area1) > (pib2 + area2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 4) {
                    printf("Atributo usado para segunda comparação: Pontos Turísticos\n");
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if ((pib1 + num_pts_turisticos1) == (pib2 + num_pts_turisticos2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (pib1 + num_pts_turisticos1) > (pib2 + num_pts_turisticos2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 5) {
                    printf("Atributo usado para segunda comparação: Densidade Populacional\n");
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if ((pib1 + dens_popul1) == (pib2 + dens_popul2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (pib1 + dens_popul1) > (pib2 + dens_popul2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                }
                break;
            case 4:
                printf("Atributo usado para primeira comparação: Pontos Turísticos\n");
                if (escolhaUsuario2 == 1) {
                    printf("Atributo usado para segunda comparação: População\n");
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if ((num_pts_turisticos1 + populacao1) == (num_pts_turisticos2 + populacao2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (num_pts_turisticos1 + populacao1) > (num_pts_turisticos2 + populacao2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 2) {
                    printf("Atributo usado para segunda comparação: Área\n");
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if ((num_pts_turisticos1 + area1) == (num_pts_turisticos2 + area2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (num_pts_turisticos1 + area1) > (num_pts_turisticos2 + area2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 3) {
                    printf("Atributo usado para segunda comparação: PIB\n");
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if ((num_pts_turisticos1 + pib1) == (num_pts_turisticos2 + pib2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (num_pts_turisticos1 + pib1) > (num_pts_turisticos2 + pib2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 5) {
                    printf("Atributo usado para segunda comparação: Densidade Populacional\n");
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if ((num_pts_turisticos1 + dens_popul1) == (num_pts_turisticos2 + dens_popul2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (num_pts_turisticos1 + dens_popul1) > (num_pts_turisticos2 + dens_popul2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                }
                break;
            case 5:
                printf("Atributo usado para primeira comparação: Densidade Populacional\n");
                if (escolhaUsuario2 == 1) {
                    printf("Atributo usado para segunda comparação: População\n");
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    printf("População: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, populacao1, cidade2, populacao2);
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if (populacao1 == populacao2) {
                        printf("As cartas empataram no atributo: População\n");
                    } else if (resultado = (populacao1 > populacao2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: População\n", resultado);
                    }
                    if ((dens_popul1 + populacao1) == (dens_popul2 + populacao2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (dens_popul1 + populacao1) > (dens_popul2 + populacao2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 2) {
                    printf("Atributo usado para segunda comparação: Área\n");
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    printf("Área: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if (area1 == area2) {
                        printf("As cartas empataram no atributo: Área\n");
                    } else if (resultado = (area1 > area2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Área\n", resultado);
                    }
                    if ((dens_popul1 + area1) == (dens_popul2 + area2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (dens_popul1 + area1) > (dens_popul2 + area2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 3) {
                    printf("Atributo usado para segunda comparação: PIB\n");
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    printf("PIB: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if (pib1 == pib2) {
                        printf("As cartas empataram no atributo: PIB\n");
                    } else if (resultado = (pib1 > pib2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: PIB\n", resultado);
                    }
                    if ((dens_popul1 + pib1) == (dens_popul2 + pib2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (dens_popul1 + pib1) > (dens_popul2 + pib2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                } else if (escolhaUsuario2 == 4) {
                    printf("Atributo usado para segunda comparação: Pontos Turísticos\n");
                    printf("Densidade Populacional: Carta 1 - %s: %.2f - Carta 2 - %s: %.2f\n", cidade1, dens_popul1, cidade2, dens_popul2);
                    printf("Pontos Turísticos: Carta 1 - %s: %d - Carta 2 - %s: %d\n", cidade1, num_pts_turisticos1, cidade2, num_pts_turisticos2);
                    if (dens_popul1 == dens_popul2) {
                        printf("As cartas empataram no atributo: Densidade Populacional\n");
                    } else if (resultado = (dens_popul1 < dens_popul2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Densidade Populacional\n", resultado);
                    }
                    if (num_pts_turisticos1 == num_pts_turisticos2) {
                        printf("As cartas empataram no atributo: Pontos Turísticos\n");
                    } else if (resultado = (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2) {
                        printf("Carta %d Venceu o atributo: Pontos Turísticos\n", resultado);
                    }
                    if ((dens_popul1 + num_pts_turisticos1) == (dens_popul2 + num_pts_turisticos2)) {
                        printf("A soma dos atributos deu empate!");
                    } else if (resultado = (dens_popul1 + num_pts_turisticos1) > (dens_popul2 + num_pts_turisticos2) ? 1 : 2) {
                        printf("A Carta %d Venceu!\n", resultado);
                    }
                }
                break;
        }
    }
    return 0;
}