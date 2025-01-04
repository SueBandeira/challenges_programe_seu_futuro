/*Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável "a" e um para a variável "b". 
Em seguida, faça os passos que julgar nescessário para que ao final, a variável "a" possua o valor que inicialmente 
estava em "b" e a variável "b" possua o valor que inicialmente estava em "a". Traduza seu algortimo para linguagem C 
e exiba seus valores na tela.

=--------------=
  MEU CÓDIGO  
=--------------=*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);
    
    printf("\nValor inicial de a é %d e de b é %d.", a, b);
    
    c = a;
    a = b;
    b = c;
    
    printf("\n\nValor final de a é %d e de b é %d.", a, b);

    return 0;
}

/*SOLUÇÃO PROPOSTA PELO DONO DO CANAL

=--------------=
   PROFESSOR  
=--------------=

int a, b, c;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);
    
    printf("Valor lidos: a: %d\tb: %d\n", a, b);
    
    c = a;
    a = b;
    b = c;
    
    printf("Valor lidos: a: %d\tb: %d\n", a, b);
    
*/

