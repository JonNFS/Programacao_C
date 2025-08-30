/* Desafio Super Trunfo - Cartas (Nível Novato) */

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

    // Carta 1
    printf("Insira os dados necessários para criar a primeira carta.\n");
        
    printf("Digite o Estado (sigla): ");
    scanf("%s", Estado);

    printf("Digite o Codigo (Sigla + Codigo): ");
    scanf("%s", Codigo);

    printf("Digite o Nome da Cidade: ");
    fgets(Nome_Cidade, sizeof(Nome_Cidade), stdin); // Usando fgets para permitir espaços no nome da cidade
    Nome_Cidade[strcspn(Nome_Cidade, "\n")] = '\0'; // Removendo o caractere de nova linha
    //getchar(); Não é necessário aqui pois o fgets já consome a nova linha

    printf("Digite a População: ");
    scanf("%d", &Populacao);
    
    printf("Digite a Área: ");
    scanf("%f", &Area);
    
    printf("Digite o PIB: ");
    scanf("%f", &Pib);
    
    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &Pontos_Turisticos);   
    
    printf("Carta 1 criada com sucesso!\n");
    printf("Estado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", Estado, Codigo, Nome_Cidade, Populacao, Area, Pib, Pontos_Turisticos);

    // Carta 2
    printf("Insira os dados necessários para criar a segunda carta.\n");
        
    printf("Digite o Estado (sigla): ");
    scanf("%s", Estado);
    
    printf("Digite o Codigo (Sigla + Codigo): ");
    scanf("%s", Codigo);
    
    printf("Digite o Nome da Cidade: ");
    fgets(Nome_Cidade, sizeof(Nome_Cidade), stdin); // Usando fgets para permitir espaços no nome da cidade
    Nome_Cidade[strcspn(Nome_Cidade, "\n")] = '\0'; // Removendo o caractere de nova linha
    //getchar(); Não é necessário aqui pois o fgets já consome a nova linha

    printf("Digite a População: ");
    scanf("%d", &Populacao);
    
    printf("Digite a Área: ");
    scanf("%f", &Area);
    
    printf("Digite o PIB: ");
    scanf("%f", &Pib);
    
    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &Pontos_Turisticos);   
    
    printf("Carta 2 criada com sucesso!\n");
    printf("Estado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", Estado, Codigo, Nome_Cidade, Populacao, Area, Pib, Pontos_Turisticos);

    return 0;   

}

