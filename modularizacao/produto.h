#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct
{
    int codigo;
    char nome[30];
    float preco;
} Produto;

void infoProduto(Produto prod);
void cadastrarProduto();
void listarProdutos();
Produto pegarProdutoPorCodigo(int codigo);

#endif
