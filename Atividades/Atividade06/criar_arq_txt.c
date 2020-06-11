#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

FILE *arq;
char palavra[20];

arq = fopen("dados.txt","w");
				
if (arq == NULL)
{
    puts("O arquivo nao foi aberto!\n");
}
else
   {
     puts("O arquivo foi aberto!\n");
   }
   	 puts("Escreva algo no arquivo:\n");
  		scanf("%s", palavra);
	 puts("\nPressione uma tecla para finalizar...");
  	
  	fprintf(arq,"[%s]", palavra);
  	 
getchar();

fclose(arq);


exit (1);
}