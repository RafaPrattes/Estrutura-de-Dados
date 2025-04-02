#include <mercado.h>

void menu()
{
    int opcao;
    while (1)
    {
        printf("================ Bem-vindo(a) - Solução Mercado ===========\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Comprar produto\n");
        printf("4 - Visualizar carrinho\n");
        printf("5 - Fechar pedido\n");
        printf("6 - Sair do sistema\n");

        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            cadastrarProduto();
            break;
        case 2:
            listarProdutos();
            break;
        case 3:
            comprarProduto();
            break;
        case 4:
            visualizarCarrinho();
            break;
        case 5:
            fecharPedido();
            break;
        case 6:
            printf("Volte sempre!\n");
            exit(0);
        default:
            printf("Opção inválida.\n");
        }
        sleep(2);
    }
}
