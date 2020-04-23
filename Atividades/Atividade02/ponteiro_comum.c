#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    int x = 23;
    int *ptr;

    printf("%x\n", ptr);
    printf("%i\n", *ptr);

    *ptr = 10;

    printf("%i\n", *ptr);

    return (0);
}