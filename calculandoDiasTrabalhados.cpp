#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int dia;
    float valorDia = 45.00, imposto = 8, valorTotal;
    
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dia);
    
    valorTotal = valorDia * dia;
    valorTotal = valorTotal - (imposto*valorTotal)/100;
    
    printf("O valor a ser ser recebido é: %.2f", valorTotal);
}
