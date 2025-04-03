#ifndef PRODUTO_H //---> SE Produto não definido
#define PRODUTO_H //

//Definindo a estrutura Produto, que registra um item a ser vendido
typedef struct
{
    int codigo;
    char nome[30];
    float preco;
} Produto;
//Declara as funções que lidam com Produto, mas ainda não as implementa
void infoProduto(Produto prod);
void cadastrarProduto();
void listarProdutos();
Produto pegarProdutoPorCodigo(int codigo);

#endif
//ifndef, define e endif impedem a inclusão múltipla que causam erros de redefinição
