#include <stdio.h>
#include <stdlib.h>

int menu(){
    int cadastro = 1;
    int lista = 2;
    int compra = 3;
    int visualizacao = 4;
    int fecharPedido = 5;
    int sair = 6;

    printf("Digite qual opcao deseja\n1 - Cadastrar Produto\n2 - Listar produtos cadastrados\n3 - Comprar produto\n4 - Visualizar carrinho\n5 - Fechar pedido\n6 - Sair do menu:\n ");
    scanf("%d",  cadastro, lista, compra, visualizacao, fecharPedido, sair);
}


void cadastrarProduto(){
    int codigo;
    char nome;
    float preco;
    
    printf("Digite o codigo do produto a ser cadastrado:\n");
    scanf("%d", codigo);
    printf("Digite o nome do produto a ser cadastrado:\n");
    scanf("%s", nome);
    printf("Digite o preco do produto a ser cadastrado:\n");
    scanf("%f", preco);

}

void listarProdutos(){
    char produto;
}

float comprarProduto(){

}

char visualizarCarrinho(){

}

float fecharPedido(){
    char produto;
    float preco;
    float valorTotal = produto + preco;
} 

void temNoCarrinho(){

}

int pegarProdutoPorCodigo(){
    int codigo;
    printf("Digite o codigo do produto desejado: ");
    scanf("%d", codigo);
}


int main(){

   int produtos[50];
   int carrinho[50];



    typedef struct
{
    int codigo; char nome[30]; float preco;}
    Produto;

    typedef struct
{
char produto; int quantidade;
} Carrinho;

menu();
cadastrarProduto();
listarProdutos();
comprarProduto();
visualizarCarrinho();
fecharPedido();
temNoCarrinho();
pegarProdutoPorCodigo();

}