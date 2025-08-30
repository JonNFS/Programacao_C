/* Desafio Super Trunfo - Cartas (Nível Aventureiro) */

#include <stdio.h>
#include <string.h>

int main(){

    char Estado[3];
    char Codigo[6];
    char Nome_Cidade[30];
    int Populacao;
    float Area;
    float Pib;
    int Pontos_Turisticos;
    float Populacao_Densidade;
    float Pib_Per_Capita;

    // Carta 1
    printf("Insira os dados necessários para criar a primeira carta.\n");
        
    printf("Digite o Estado (sigla): ");
    scanf("%s", Estado);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o Codigo (Sigla + Codigo): ");
    scanf("%s", Codigo);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o Nome da Cidade: ");
    fgets(Nome_Cidade, sizeof(Nome_Cidade), stdin); // Usando fgets para permitir espaços no nome da cidade
    Nome_Cidade[strcspn(Nome_Cidade, "\n")] = '\0'; // Removendo o caractere de nova linha
    //getchar(); Não é necessário aqui pois o fgets já consome a nova linha

    printf("Digite a População: ");
    scanf("%d", &Populacao);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a Área em km²: ");
    scanf("%f", &Area);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o PIB: ");
    scanf("%f", &Pib);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &Pontos_Turisticos);   
    getchar(); // Limpa o buffer do teclado

    // Cálculo para a População por Área em km² e PIB per Capita - Precisa colocar depois dos scans para usar os valores fornecidos pelo usuário 
    Populacao_Densidade = Populacao / Area;
    Pib_Per_Capita = Pib / Populacao;

    printf("Carta 1:\n");
    printf("Estado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\n", Estado, Codigo, Nome_Cidade);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.3f bilhões de reais\n", Populacao, Area, Pib);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Populacao_Densidade);
    printf("PIB per Capita: %.2f\n\n", Pib_Per_Capita);    

    // Carta 2
    printf("Insira os dados necessários para criar a segunda carta.\n");
        
    printf("Digite o Estado (sigla): ");
    scanf("%s", Estado);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o Codigo (Sigla + Codigo): ");
    scanf("%s", Codigo);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o Nome da Cidade: ");
    fgets(Nome_Cidade, sizeof(Nome_Cidade), stdin); // Usando fgets para permitir espaços no nome da cidade
    Nome_Cidade[strcspn(Nome_Cidade, "\n")] = '\0'; // Removendo o caractere de nova linha
    //getchar(); Não é necessário aqui pois o fgets já consome a nova linha

    printf("Digite a População: ");
    scanf("%d", &Populacao);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a Área em km²: ");
    scanf("%f", &Area);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o PIB: ");
    scanf("%f", &Pib);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &Pontos_Turisticos);   
    getchar(); // Limpa o buffer do teclado

    // Cálculo para a População por Área em km² e PIB per Capita - Precisa colocar depois dos scans para usar os valores fornecidos pelo usuário 
    Populacao_Densidade = Populacao / Area;
    Pib_Per_Capita = Pib / Populacao;

    printf("Carta 2:\n");
    printf("Estado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\n", Estado, Codigo, Nome_Cidade);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.3f bilhões de reais\n", Populacao, Area, Pib);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Populacao_Densidade);
    printf("PIB per Capita: %.2f\n", Pib_Per_Capita);    

    return 0;   

}

