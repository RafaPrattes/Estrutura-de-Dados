#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Digite o número 1: \n", &num1);
    scanf("%d", &num1);

    printf("Digite o numero 2: \n", &num2);
    scanf("%d", &num2);

    if (num1 > num2)
        printf("Número 1 é maior que número 2", &num1, &num2);
    else
        printf("Número 2 é maior.");
}