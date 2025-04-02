#ifndef CARRINHO_H
#define CARRINHO_H

#include "produto.h"

typedef struct
{
    Produto produto;
    int quantidade;
} Carrinho;

void comprarProduto();
void visualizarCarrinho();
int *temNoCarrinho(int codigo);
void fecharPedido();

#endif
