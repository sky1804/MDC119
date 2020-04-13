#include "stdio.h"
 
 main(void)
{ 
  int a, b, ant, i, n;
 
  a = 0;
  b = 1;
 
  printf("Digite um numero: ");
  scanf("%d", &n);
  printf("sequencia de fibonacci:\n");
  printf("%d\n", b);
  for(i = 0; i < n; i++)
  {
    ant = a + b;
    a = b;
    b = ant;
    printf("%d\n", ant);
  }
}