#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  long int c[3];

  printf("O tamanho de c é: %zu\n", sizeof c);
  printf("O número de elementos de c é: %zu\n", sizeof c / sizeof c[0]);
  
  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("O elemento 0 de c é: %ld\n", c[0]);
  printf("O elemento 1 de c é: %ld\n", c[1]);
  printf("O elemento 2 de c é: %ld\n", c[2]);
 
  printf("O endereço do array c em memória: %p\n", c);
  printf("O endereço do array &c em memória: %p\n", &c);
  printf("O endereço do primeiro elemento do array c em memória: %p\n", &c[0]);
  printf("O endereço do primeiro elemento do array c em memória: %p\n", &c[1]);

  return 0;
}
