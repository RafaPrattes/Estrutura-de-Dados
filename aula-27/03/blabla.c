#include "blabla.h"
#include <stdio.h>
int soma(int n, int m){
    return n + m;
}

int subtracao(int n, int m){
    return n - m;
}

int divisao(int n, int m){
    if(m && n > 0)
    return n / m;
    else
    printf("Operacao invalida, nao eh possivel fazer divisao por 0.");
}

int multiplicacao(int n, int m){
    return n * m;
}

int menu(){
    printf("------> Calculadora <------\n");
    printf("Escolha uma opcao abaixo: \n");
    printf("1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Refazer outra operacao\n6 - Sair");
    scanf("%d", &soma, &subtracao, &divisao, &multiplicacao, &menu);

}