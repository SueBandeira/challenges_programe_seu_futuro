#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma variável auxiliar.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);
    
    printf("\nValor inicial de a é %d e de b é %d", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\n\nValor final de a é %d e de b é %d", a, b);

    return 0;
}
