#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);
    
    printf("\nValor inicial de a � %d e de b � %d", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\n\nValor final de a � %d e de b � %d", a, b);

    return 0;
}
