/* Desafio Super Trunfo - Cartas (Nível Mestre) */

#include <stdio.h>
#include <string.h>

int main() {
    // Dados das cartas
    char Estado1[3], Codigo1[6], Nome_Cidade1[30];
    int Populacao1, Pontos_Turisticos1;
    float Area1, Pib1, Densidade1, PibCapita1;

    char Estado2[3], Codigo2[6], Nome_Cidade2[30];
    int Populacao2, Pontos_Turisticos2;
    float Area2, Pib2, Densidade2, PibCapita2;

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

    // Exibir cartas
    printf("\nCarta 1\n");
    printf("Estado: %s\nCodigo: %s\n Nome da Cidade: %s\n", Estado1, Codigo1, Nome_Cidade1);
    printf("Populacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", Populacao1, Area1, Pib1, Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f\n", Densidade1, PibCapita1);

    printf("\nCarta 2\n");
    printf("Estado: %s\nCodigo: %s\nNome da Cidade: %s\n", Estado2, Codigo2, Nome_Cidade2);
    printf("Populacao: %d\nArea: %.2f\nPIB: %.2f\nTuristicos: %d\n", Populacao2, Area2, Pib2, Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f\n", Densidade2, PibCapita2);

    // Solicitar escolha do atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\nResultado: ");
    switch (escolha) {
        case 1: (Populacao1 > Populacao2) ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n"); break;
        case 2: (Area1 > Area2) ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n"); break;
        case 3: (Pib1 > Pib2) ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n"); break;
        case 4: (Pontos_Turisticos1 > Pontos_Turisticos2) ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n"); break;
        case 5: (Densidade1 > Densidade2) ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n"); break;
        case 6: (PibCapita1 > PibCapita2) ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n"); break;
        default: printf("Opcao invalida!\n");
    }

    return 0;
}