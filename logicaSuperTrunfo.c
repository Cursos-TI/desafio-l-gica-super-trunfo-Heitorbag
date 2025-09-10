#include <stdio.h>

int main() {
    
    // CADASTRO DAS CARTAS
    char nomePais1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;


    printf("Digite o Nome do País: ");
    scanf(" %[^\n]", nomePais1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    char nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    printf("Digite o Nome do País: ");
    scanf(" %[^\n]", nomePais2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // MENU DE ESCOLHA DO ATRIBUTO
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparacao de cartas:\n");

    switch(opcao) {
        case 1: // Populacao
            printf("Atributo: Populacao\n");
            printf("Carta 1 - %s: %d\n", nomePais1, populacao1);
            printf("Carta 2 - %s: %d\n", nomePais2, populacao2);
            if(populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            else if(populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Area
            printf("Atributo: Area\n");
            printf("Carta 1 - %s: %.2f km²\n", nomePais1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomePais2, area2);
            if(area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            else if(area2 > area1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões\n", nomePais1, pib1);
            printf("Carta 2 - %s: %.2f bilhões\n", nomePais2, pib2);
            if(pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            else if(pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos Turisticos
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1 - %s: %d\n", nomePais1, pontosTuristicos1);
            printf("Carta 2 - %s: %d\n", nomePais2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            else if(pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Demografica
            printf("Atributo: Densidade Demografica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomePais2, densidade2);
            if(densidade1 < densidade2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            else if(densidade2 < densidade1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
