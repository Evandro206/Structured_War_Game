#include <stdio.h>
#include <stdlib.h>

// Estrutura de territorios que define um tipo Territory
typedef struct
{
    char name[30]; // Nome do territorio
    char color[10]; // Cor para o territorio
    int troops; // Quatidade de tropas do territorio
} Territory;

// Função que faz registro dos territorios
Territory territoryRegister(Territory territories[])
{
    // loop responsavel por registrar cada territorio de acordo com sua posição no vetor territories[]
    for (int i = 0; i < 5; i++)
    {
        printf("\nTerriorio: %d\n", i + 1);
        printf("Nome do territorio: ");
        scanf("%s", territories[i].name);
        printf("Cor do territorio (ex: Azul, Vermelho): ");
        scanf("%s", territories[i].color);
        printf("Quantidade de tropas do territorio: ");
        scanf("%d", &territories[i].troops);
    }
    printf("territorios registrado com sucesso!\n ");
    return territories[5];
}

// Função que faz exibição de cada territorio de forma individual
void displayTerritory(Territory terr)
{
    printf("=================================\n");
    printf("  - Nome do territorio: %s \n", terr.name);
    printf("  - Cor do territorio: %s \n", terr.color);
    printf("  - Quantidades de tropas do territorio: %d \n", terr.troops);
}

// Função principal responsável por chamar demais funções e fazer o programa executar de forma coerente
int main(void)
{
    Territory territories[5];
    territoryRegister(territories);
    printf("--- O mundo atualmente --- \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nTerritorio: %d \n", i + 1);
        displayTerritory(territories[i]);
    }
    return 0;
}
