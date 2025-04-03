#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 3

void inicializarTabuleiro(char tabuleiro[SIZE][SIZE]);
void imprimirTabuleiro(char tabuleiro[SIZE][SIZE]);
int verificarVencedor(char tabuleiro[SIZE][SIZE], char jogador);
int verificarEmpate(char tabuleiro[SIZE][SIZE]);
void obterJogada(char tabuleiro[SIZE][SIZE], char jogador, char nome[50]);

int main()
{
    char tabuleiro[SIZE][SIZE];
    char jogador1[50], jogador2[50];
    char simbolo1, simbolo2;
    char opcao;

    printf("Digite o nome do jogador 1: ");
    scanf("%s", jogador1);
    printf("Escolha X ou O: ");
    scanf("%c", &simbolo1);
    simbolo1 = toupper(simbolo1);

    if (simbolo1 == 'X')
    {
        simbolo2 = 'O';
    }
    else
    {
        simbolo2 = 'X';
    }
    printf("Digite o nome do jogador 2: ");
    scanf("%s", jogador2);
    printf("%s jogará com %c e %s jogará com %c\n", jogador1, simbolo1, jogador2, simbolo2);

    do
    {
        inicializarTabuleiro(tabuleiro);
        char jogadorAtual = simbolo1;
        char nomeAtual[50];
        strcpy(nomeAtual, jogador1);
        int jogadas = 0;

        while (1)
        {
            imprimirTabuleiro(tabuleiro);
            obterJogada(tabuleiro, jogadorAtual, nomeAtual);
            jogadas++;

            if (verificarVencedor(tabuleiro, jogadorAtual))
            {
                imprimirTabuleiro(tabuleiro);
                printf("Parabéns %s! Você venceu!\n", nomeAtual);
                break;
            }

            if (jogadas == SIZE * SIZE || verificarEmpate(tabuleiro))
            {
                imprimirTabuleiro(tabuleiro);
                printf("O jogo empatou!\n");
                break;
            }

            if (jogadorAtual == simbolo1)
            {
                jogadorAtual = simbolo2;
                strcpy(nomeAtual, jogador2);
            }
            else
            {
                jogadorAtual = simbolo1;
                strcpy(nomeAtual, jogador1);
            }
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &opcao);
    } while (tolower(opcao) == 's');

    printf("Obrigado por jogar!\n");
    return 0;
}

void inicializarTabuleiro(char tabuleiro[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro(char tabuleiro[SIZE][SIZE])
{
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", tabuleiro[i][j]);
            if (j < SIZE - 1)
                printf("|");
        }
        printf("\n");
        if (i < SIZE - 1)
            printf("-----------\n");
    }
    printf("\n");
}

int verificarVencedor(char tabuleiro[SIZE][SIZE], char jogador)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
            return 1;
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)
            return 1;
    }
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador)
        return 1;
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)
        return 1;
    return 0;
}

int verificarEmpate(char tabuleiro[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (tabuleiro[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

void obterJogada(char tabuleiro[SIZE][SIZE], char jogador, char nome[50])
{
    int linha, coluna;
    while (1)
    {
        printf("%s (%c), digite a linha e a coluna (1-3): ", nome, jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3)
        {
            printf("Entrada inválida! Tente novamente.\n");
            continue;
        }

        if (tabuleiro[linha - 1][coluna - 1] != ' ')
        {
            printf("Espaço já ocupado! Escolha outro.\n");
            continue;
        }

        tabuleiro[linha - 1][coluna - 1] = jogador;
        break;
    }
}
