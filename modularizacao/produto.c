#include "produto.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

static int contador_produto = 0;
static Produto produtos[50];

void infoProduto(Produto prod)
{
    printf("Código: %d \nNome: %s \nPreço: %.2f\n", prod.codigo, strtok(prod.nome, "\n"), prod.preco);
}

void cadastrarProduto()
{
    printf("Cadastro de Produto\n");
    printf("====================\n");

    printf("Informe o nome do produto: \n");
    fgets(produtos[contador_produto].nome, 30, stdin);

    printf("Informe o preço do produto: \n");
    scanf("%f", &produtos[contador_produto].preco);

    produtos[contador_produto].codigo = contador_produto + 1;
    printf("O produto %s foi cadastrado com sucesso.\n", strtok(produtos[contador_produto].nome, "\n"));
    contador_produto++;

    sleep(2);
}

void listarProdutos()
{
    if (contador_produto > 0)
    {
        printf("Listagem de produtos.\n");
        printf("---------------------\n");
        for (int i = 0; i < contador_produto; i++)
        {
            infoProduto(produtos[i]);
            printf("------------------\n");
            sleep(1);
        }
    }
    else
    {
        printf("Não temos ainda produtos cadastrados.\n");
    }
    sleep(2);
}

Produto pegarProdutoPorCodigo(int codigo)
{
    Produto p;
    for (int i = 0; i < contador_produto; i++)
    {
        if (produtos[i].codigo == codigo)
        {
            p = produtos[i];
            break;
        }
    }
    return p;
}
