  
#include <stdio.h>
#include <stdlib.h>

struct s_aluno {
    char nome[30];
    int matricula;
    float media;
    };
main(int argc, char const *argv[]){

    fflush(stdout);
   
    struct s_aluno aluno, *ptr = &aluno;
    
puts("DESCRICAO:\n");
    aluno.media = 9.0;
    aluno.matricula = 1912082032;
    strcpy(aluno.nome, "Willian");
    printf("%s\n", ptr->nome);
    printf("%d\n", ptr->matricula);
    printf("%.2f\n", ptr->media);

    return EXIT_SUCCESS;
}
