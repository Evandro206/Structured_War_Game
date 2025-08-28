#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Estrutura de territorios que define um tipo Territory
typedef struct
{
    char name[30]; // Nome do territorio
    char color[10]; // Cor para o territorio
    int troops; // Quatidade de tropas do territorio
} Territory;

// Função que faz exibição de cada territorio de forma individual
void displayTerritory(Territory territories[], int territoriesNum)
{
    printf("\n======================================\n");
    printf("          O Mundo - Estado Atual      \n");
    printf("======================================\n");
    for (int i = 0; i < territoriesNum; i++)
    {
        printf("%d. %s (Exercito: %s, Tropas: %d)\n",
               i + 1,
               territories[i].name,
               territories[i].color,
               territories[i].troops);
    }
}

// Função que faz registro dos territorios
void territoryRegister(Territory territories[], int territoriesNum)
{
    // loop responsavel por registrar cada territorio de acordo com sua posição no vetor territories[]
    for (int i = 0; i < territoriesNum; i++)
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
    displayTerritory(territories, territoriesNum);
}

// Função responsável por registar ataque
void atack(Territory territories[], int territoriesNum)
{
    // Recebe do usuário o atacante e o defensor
    int attackerID, defenderID;
    printf("\n===================================\n");
    printf(" Qual teritorio vai atacar (ex: 1, 2): \n");
    for (int i = 0; i < territoriesNum; i++)
    {
        printf("  %d - %s \n", i + 1, territories[i].name);
    }
    scanf("%d", &attackerID);
    attackerID = attackerID - 1;
    printf(" Qual teritorio vai ser atacado (ex: 1, 2): \n");
    for (int i = 0; i < territoriesNum; i++)
    {
        if (territories[i].color == territories[attackerID].color)
        {
            continue;
        }
        printf("  %d - %s \n", i + 1, territories[i].name);
    }
    scanf("%d", &defenderID);
    defenderID = defenderID - 1;

    // Randomiza uma joga de dados de ambos (2 dados para cada)
    int attackerDice = rand() % 12;
    int defenderDice = rand() % 12;
    printf("Os dados do atacante resultaram em: %d\n", attackerDice);
    printf("Os dados do defensor resultaram em %d\n", defenderDice);

    // Verifica o vencedor exibie o resultado e atualiza os numeros de tropas
    if (attackerDice == defenderDice)
    {
        printf("O resultado da batalha foi um: Empate!\n");
        printf("Ambos perderam 1 tropa!\n");
        territories[attackerID].troops--;
        territories[defenderID].troops--;
    }
    else if (attackerDice >= defenderDice)
    {
        printf("O resultado da batalha foi uma vitoria para %s!\n", territories[attackerID].name);
        printf("O defensor perdeu!\n");
        territories[attackerID].troops = territories[attackerID].troops + territories[defenderID].troops / 2;
        territories[defenderID].troops = territories[defenderID].troops / 2;
        strcpy(territories[defenderID].color, territories[attackerID].color);
    }
    else
    {
        printf("O resultado da batalha foi uma vitoria para %s!\n", territories[defenderID].name);
        printf("O atacante perdeu 1 tropas!\n");
        territories[attackerID].troops--;
    }
    displayTerritory(territories, territoriesNum);
}

// Função que faz o loop do jogo enquanto o usuário não digitar 0
void gameLoop(Territory territories[], int participantsNum)
{
    char keep;
    do
    {
        atack(territories, participantsNum);
        printf("Deseja continuar? se sim aperte Enter, se nao digite 0!\n");
        getchar();
        keep = getchar();
    }
    while (keep != '0');
}

void memoryFreeing(Territory territories[])
{
    free(territories);
}

// Função principal responsável por chamar demais funções e fazer o programa executar de forma coerente
int main(void)
{
    srand(time(NULL));
    int participantsNum;
    Territory* territories;
    printf("Quantos participantes teremos:");
    scanf("%d", &participantsNum);
    if (participantsNum <= 1)
    {
        territoryRegister(territories, participantsNum);
        exit(0);
    }
    territories = (Territory*)malloc(participantsNum * sizeof(Territory));
    if (territories == NULL)
    {
        printf("Erro ao alocar memoria");
        exit(1);
    }
    territoryRegister(territories, participantsNum);
    gameLoop(territories, participantsNum);
    memoryFreeing(territories);
    return 0;
}
