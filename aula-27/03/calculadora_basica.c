#include <stdio.h>
#include <stdlib.h>
#include "blabla.h"

int main(){

    int opcao;
    int n, m;

    printf("------> Calculadora <------\n");
    printf("Escolha uma opcao abaixo: \n");
    printf("1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Retornar ao menu\n6 - Sair\n");

    scanf("%d", &opcao);
    
switch(opcao) {
    case 1:
    printf("Opcao selecionada: soma. Digite o primeiro numero:\n");
    scanf("%d", &n);
    printf("Digite o segundo numero:\n");
    scanf("%d", &m);
    printf("O resultado da soma entre %d e %d eh: %d\n", n, m, soma(n, m));
        break;
    case 2:
    printf("Opcao selecionada: subtracao. Digite o primeiro numero:\n");
    scanf("%d", &n);
    printf("Digite o segundo numero:\n");
    scanf("%d", &m);
    printf("O resultado da subtracao entre %d e %d eh: %d\n", n, m, subtracao(n, m));
        break;
    case 3:
    printf("Opcao selecionada: divisao. Digite o primeiro numero:\n");
    scanf("%d", &n);
    printf("Digite o segundo numero:\n");
    scanf("%d", &m);
    printf("O resultado da divisao entre %d e %d eh: %d\n", n, m, divisao(n, m));
        break;
    case 4:
    printf("Opcao selecionada: multiplicacao. Digite o primeiro numero:\n");
    scanf("%d", &n);
    printf("Digite o segundo numero:\n");
    scanf("%d", &m);
    printf("O resultado da multiplicacao entre %d e %d eh: %d\n", n, m, multiplicacao(n, m));
        break;
    default:
    printf("Retornando ao menu.\n", menu());
    scanf("%d");
    }
   
}