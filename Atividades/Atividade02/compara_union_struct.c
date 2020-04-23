#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

union u_produto
{
    char nome[30];
    float preco;
    float volume;
    float peso;

} UPRODUTO;

struct s_produto
{
    char nome[30];
    float preco;
    float volume;
    float peso;
} PRODUTO;


struct s_item
{
    char nome[30];
    float preco;
    float volume;
    float peso;

};


int main()
{
    
int produto1;
int produto2;

printf(" nome: \n");
fflush(stdin);
fgets(PRODUTO.nome,30,stdin);

printf(" preco: \n");
fflush(stdin);
scanf("%.2f", &PRODUTO.preco);

printf(" volume: \n");
fflush(stdin);
scanf("%.2f", &PRODUTO.volume);

printf(" peso: \n");
fflush(stdin);
scanf("%.2f", &PRODUTO.peso);

//--------------------------------------------------------------------------//

printf(" nome: \n");
fflush(stdin);
fgets(UPRODUTO.nome,30,stdin);

printf(" preco: \n");
fflush(stdin);
scanf("%.2f", &UPRODUTO.preco);

printf(" volume: \n");
fflush(stdin);
scanf("%.2f", &UPRODUTO.volume);

printf(" peso: \n");
fflush(stdin);
scanf("%.2f", &UPRODUTO.peso);


printf("tamanho produto :%d \n ", sizeof(PRODUTO));


printf("tamanho do produto union :%d", sizeof(UPRODUTO));


}