#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float valorReal, valorDolar;

	printf("Digite a valor em reais: ");
    scanf("%f", &valorReal);
    
    valorDolar = valorReal / 5.30;
    
    printf("O valor equivale a %.2f dolares\n.", valorDolar);
    
}
