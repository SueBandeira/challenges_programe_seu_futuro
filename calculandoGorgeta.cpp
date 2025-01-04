/*Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.

=--------------=
  MEU CÓDIGO  
=--------------=*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int qtd_pessoas;
    float valor_final, despesa, gorgeta, gorgeta_percentual, total;
    
    printf("Qual o valor da despesa: ");
    scanf("%f", &despesa);
    
    printf("\nQual o valor da gorgeta: ");
    scanf("%f", &gorgeta);
    
    printf("\nQual a quantidade de pessoas: ");
    scanf("%d", &qtd_pessoas);
    
    total = despesa + gorgeta;
    valor_final = total/qtd_pessoas;
    
    gorgeta_percentual = (gorgeta*100)/despesa;
    
    printf("Despesa: %.2f\nPercentual gorgeta: %.2f porcento do valor\nCada pessoa vai pagar: %.2f\n\n", total, gorgeta_percentual, valor_final);
 
}
/*

int numPessoas;
float valorDespesa, gorgeta, valorTotal, valorPorPessoa;

printf("Digite o valor da conta, da gorgeta e a quantidade de pessoas: ");
scanf("%f%f%d", &valorDespesa, &gorgeta, &numPessoas);

valorTotal = valorDespesa * gorgeta/100 + valorDespesa;
valorPorPessoa = valorTotal/ numPessoas;*/
