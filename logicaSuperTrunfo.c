#include <stdio.h>

int main() {
    
    // CADASTRO DAS CARTAS
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    printf("Cadastro da Carta 1:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", nomePais1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\nCadastro da Carta 2:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", nomePais2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // MENU DE ESCOLHA DO ATRIBUTO
    int opcao1, opcao2;
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != opcao1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Comparação dos atributos
    float valor1_A=0, valor2_A=0, valor1_B=0, valor2_B=0;
    char atributoA[30], atributoB[30];

    // Primeiro atributo
    switch(opcao1) {
        case 1: valor1_A = populacao1; valor2_A = populacao2; sprintf(atributoA,"População"); break;
        case 2: valor1_A = area1; valor2_A = area2; sprintf(atributoA,"Área"); break;
        case 3: valor1_A = pib1; valor2_A = pib2; sprintf(atributoA,"PIB"); break;
        case 4: valor1_A = pontosTuristicos1; valor2_A = pontosTuristicos2; sprintf(atributoA,"Pontos Turísticos"); break;
        case 5: valor1_A = densidade1; valor2_A = densidade2; sprintf(atributoA,"Densidade Demográfica"); break;
        case 6: valor1_A = pibPerCapita1; valor2_A = pibPerCapita2; sprintf(atributoA,"PIB per Capita"); break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Segundo atributo
    switch(opcao2) {
        case 1: valor1_B = populacao1; valor2_B = populacao2; sprintf(atributoB,"População"); break;
        case 2: valor1_B = area1; valor2_B = area2; sprintf(atributoB,"Área"); break;
        case 3: valor1_B = pib1; valor2_B = pib2; sprintf(atributoB,"PIB"); break;
        case 4: valor1_B = pontosTuristicos1; valor2_B = pontosTuristicos2; sprintf(atributoB,"Pontos Turísticos"); break;
        case 5: valor1_B = densidade1; valor2_B = densidade2; sprintf(atributoB,"Densidade Demográfica"); break;
        case 6: valor1_B = pibPerCapita1; valor2_B = pibPerCapita2; sprintf(atributoB,"PIB per Capita"); break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Exibição dos resultados
    printf("\n=== Comparação de Cartas ===\n");
    printf("Carta 1 - %s\n", nomePais1);
    printf("Carta 2 - %s\n", nomePais2);

    // Resultado atributo A
    int vitoriaA = (opcao1 == 5) ? (valor1_A < valor2_A) : (valor1_A > valor2_A);
    printf("\nAtributo: %s\n", atributoA);
    printf("Carta 1 (%s): %.2f | Carta 2 (%s): %.2f\n", nomePais1, valor1_A, nomePais2, valor2_A);
    printf("Vencedor: %s\n", vitoriaA ? nomePais1 : (valor1_A == valor2_A ? "Empate" : nomePais2));

    // Resultado atributo B
    int vitoriaB = (opcao2 == 5) ? (valor1_B < valor2_B) : (valor1_B > valor2_B);
    printf("\nAtributo: %s\n", atributoB);
    printf("Carta 1 (%s): %.2f | Carta 2 (%s): %.2f\n", nomePais1, valor1_B, nomePais2, valor2_B);
    printf("Vencedor: %s\n", vitoriaB ? nomePais1 : (valor1_B == valor2_B ? "Empate" : nomePais2));

    // Soma final
    float soma1 = valor1_A + valor1_B;
    float soma2 = valor2_A + valor2_B;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nomePais1, soma1);
    printf("Carta 2 (%s): %.2f\n", nomePais2, soma2);

    if(soma1 > soma2)
        printf("\nResultado Final: Carta 1 (%s) venceu!\n", nomePais1);
    else if(soma2 > soma1)
        printf("\nResultado Final: Carta 2 (%s) venceu!\n", nomePais2);
    else
        printf("\nResultado Final: Empate!\n");

    return 0;
}
