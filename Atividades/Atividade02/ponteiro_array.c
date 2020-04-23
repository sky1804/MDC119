  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]){

    char string[30];
    int i;

    strcpy(string, "\n");

    char *p = string;

    while (*p != 0){
        printf("%c", *p);
        p++;
    } 
    return (0);
}