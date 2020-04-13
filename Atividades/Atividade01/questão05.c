#include <stdio.h>
#include <stdlib.h>
int main()
{
	
    int i, b;
    int Numeros[10];
    for (i = 0;i < 10;i++)
    {
    puts("Digite um numero: ");
    scanf("%d", &Numeros[i]);
    puts("\n");
    fflush(stdin);
    
    }
    for (b = 9; b >= 0; b--)
    {
        printf("%d\n", Numeros[b]);
	
    }
    return 0;
}