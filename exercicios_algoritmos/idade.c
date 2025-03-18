#include <stdio.h>

int main()
{
    int idade;
    printf("Qual a sua idade? \n");
    scanf("%d", &idade);
    // Quando se trata de uma estrutura condicional simples com apenas um if e um else, não se faz necessário o uso de chaves {}
    if (idade < 18)
        printf("Você é de menor! \n");
    else
        printf("Você é de maior! \n");

    return 0;
}