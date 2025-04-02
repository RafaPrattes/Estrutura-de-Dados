#include "carrinho.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int contador_carrinho = 0;
static Carrinho carrinho[50];

void comprarProduto()
{
    if (contador_carrinho > 0)
    {
        printf("Informe o código do produto que deseja adicionar ao carrinho.\n");

        int codigo;
        scanf("%d", &codigo);
        getchar();

        Produto p = pegarProdutoPorCodigo(codigo);
        if (p.codigo != 0)
        {
            int *retorno = temNoCarrinho(codigo);

            if (retorno[0] == 1)
            {
                carrinho[retorno[1]].quantidade++;
                printf("Aumentei a quantidade do produto %s já existente no carrinho.\n", strtok(carrinho[retorno[1]].produto.nome, "\n"));
            }
            else
            {
                carrinho[contador_carrinho].produto = p;
                carrinho[contador_carrinho].quantidade = 1;
                contador_carrinho++;
                printf("O produto %s foi adicionado ao carrinho.\n", strtok(p.nome, "\n"));
            }
        }
        else
        {
            printf("Produto com código %d não encontrado.\n", codigo);
        }
    }
    else
    {
        printf("Ainda não existem produtos para vender.\n");
    }
    sleep(2);
}

void visualizarCarrinho()
{
    if (contador_carrinho > 0)
    {
        printf("Produtos do Carrinho\n");
        printf("--------------------\n");
        for (int i = 0; i < contador_carrinho; i++)
        {
            infoProduto(carrinho[i].produto);
            printf("Quantidade: %d\n", carrinho[i].quantidade);
            printf("-----------------\n");
            sleep(1);
        }
    }
    else
    {
        printf("Não temos ainda produtos no carrinho.\n");
    }
    sleep(2);
}

int *temNoCarrinho(int codigo)
{
    static int retorno[] = {0, 0};
    for (int i = 0; i < contador_carrinho; i++)
    {
        if (carrinho[i].produto.codigo == codigo)
        {
            retorno[0] = 1; // Produto já está no carrinho
            retorno[1] = i; // Índice do produto no carrinho
            break;
        }
    }
    return retorno;
}

void fecharPedido()
{
    if (contador_carrinho > 0)
    {
        float valorTotal = 0.0;
        printf("Sua fatura é R$ %.2f\n", valorTotal);
        contador_carrinho = 0;
        printf("Obrigado pela preferência.\n");
    }
    else
    {
        printf("Você não tem nenhum produto no carrinho ainda.\n");
    }
    sleep(3);
}
