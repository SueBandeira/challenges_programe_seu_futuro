/*Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a vari�vel "a" e um para a vari�vel "b". 
Em seguida, fa�a os passos que julgar nescess�rio para que ao final, a vari�vel "a" possua o valor que inicialmente 
estava em "b" e a vari�vel "b" possua o valor que inicialmente estava em "a". Traduza seu algortimo para linguagem C 
e exiba seus valores na tela.

=--------------=
  MEU C�DIGO  
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
    
    printf("\nValor inicial de a � %d e de b � %d.", a, b);
    
    c = a;
    a = b;
    b = c;
    
    printf("\n\nValor final de a � %d e de b � %d.", a, b);

    return 0;
}

/*SOLU��O PROPOSTA PELO DONO DO CANAL

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

