#include <stdio.h>

int main(){

int segundos = 3000;
int horas, min;

horas = segundos / 3600;

segundos = segundos%3600;

min = segundos / 60;

segundos =  segundos%60;

printf("horas%d minutos%d segundos%d", horas, min, segundos);






}