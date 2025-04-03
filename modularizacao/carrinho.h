#ifndef CARRINHO_H //--> SE o Carrinho não foi definido ainda
#define CARRINHO_H //Ele será definido

#include "produto.h"
//Definição da estrutura Carrinho que representa os produtos adicionados e sua quantidade
typedef struct
{
    Produto produto;
    int quantidade;
} Carrinho;

//Funções declaradas para manipulação do carrinho
void comprarProduto();
void visualizarCarrinho();
int *temNoCarrinho(int codigo);
void fecharPedido();

#endif //--> Fecha a verificação da duplicidade
