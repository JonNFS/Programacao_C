/* Desafio Super Trunfo - Cartas (Nível Mestre) */

#include <stdio.h>
#include <string.h>

int main() {
    // Dados das cartas
    char Estado1[3], Codigo1[6], Nome_Cidade1[30];
    unsigned long int Populacao1;
    int Pontos_Turisticos1;
    float Area1, Pib1, Densidade1, PibCapita1, SuperPoder1;

    char Estado2[3], Codigo2[6], Nome_Cidade2[30];
    unsigned long int Populacao2;
    int Pontos_Turisticos2;
    float Area2, Pib2, Densidade2, PibCapita2, SuperPoder2;

    int escolha;

    // Carta 1
    printf("Insira os dados da primeira carta.\n");
    printf("Estado (Sigla): "); scanf("%s", Estado1); getchar();
    printf("Codigo (Sigla + Numero): "); scanf("%s", Codigo1); getchar();
    printf("Nome da Cidade: "); fgets(Nome_Cidade1, sizeof(Nome_Cidade1), stdin);
    Nome_Cidade1[strcspn(Nome_Cidade1, "\n")] = '\0';
    printf("Populacao: "); scanf("%d", &Populacao1);
    printf("Area (km²): "); scanf("%f", &Area1);
    printf("PIB: "); scanf("%f", &Pib1);
    printf("Pontos Turisticos: "); scanf("%d", &Pontos_Turisticos1);

    Densidade1 = Populacao1 / Area1;
    PibCapita1 = Pib1 / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + Pib1 + Pontos_Turisticos1 + PibCapita1 + (1.0 / Densidade1);

    // Carta 2
    printf("\nInsira os dados da segunda carta.\n");
    printf("Estado (Sigla): "); scanf("%s", Estado2); getchar();
    printf("Codigo (Sigla + Numero): "); scanf("%s", Codigo2); getchar();
    printf("Nome da Cidade: "); fgets(Nome_Cidade2, sizeof(Nome_Cidade2), stdin);
    Nome_Cidade2[strcspn(Nome_Cidade2, "\n")] = '\0';
    printf("Populacao: "); scanf("%d", &Populacao2);
    printf("Area (km²): "); scanf("%f", &Area2);
    printf("PIB: "); scanf("%f", &Pib2);
    printf("Pontos Turisticos: "); scanf("%d", &Pontos_Turisticos2);

    Densidade2 = Populacao2 / Area2;
    PibCapita2 = Pib2 / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + Pib2 + Pontos_Turisticos2 + PibCapita2 + (1.0 / Densidade2);

    // Exibir cartas
    printf("\nCarta 1\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", Estado1, Codigo1, Nome_Cidade1);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", Populacao1, Area1, Pib1, Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", Densidade1, PibCapita1, SuperPoder1);

    printf("\nCarta 2\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", Estado2, Codigo2, Nome_Cidade2);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", Populacao2, Area2, Pib2, Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", Densidade2, PibCapita2, SuperPoder2);

    // Comparar e exibir resultado
    printf("\nResultado: ");
    printf("Populacao: %s\n", (Populacao1 > Populacao2) ? "Carta 1 venceu!" : "Carta 2 venceu!");
    printf("Area: %s\n", (Area1 > Area2) ? "Carta 1 venceu!" : "Carta 2 venceu!");
    printf("PIB: %s\n", (Pib1 > Pib2) ? "Carta 1 venceu!" : "Carta 2 venceu!");
    printf("Pontos Turisticos: %s\n", (Pontos_Turisticos1 > Pontos_Turisticos2) ? "Carta 1 venceu!" : "Carta 2 venceu!");
    printf("Densidade Populacional: %s\n", (Densidade1 < Densidade2) ? "Carta 1 venceu!" : "Carta 2 venceu!");
    printf("PIB per Capita: %s\n", (PibCapita1 > PibCapita2) ? "Carta 1 venceu!" : "Carta 2 venceu!");
    printf("Super Poder: %s\n", (SuperPoder1 > SuperPoder2) ? "Carta 1 venceu!" : "Carta 2 venceu!");

    return 0;
}