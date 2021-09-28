#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * = atribuição
 * + - unarios
 * + - binarios (adicao e subtracao)
 * * / (multiplicacao e divisao)
 * % (resto da divisao)
 * ++ (incremento)
 * -- (decremento)
*/

int main(void) {
  int a;

  a = (4 + 2) * 3;

  printf("%d\n", a--);
 
  printf("%d\n", a);

  return 0;
}
