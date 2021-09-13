#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;
  printf("O tamanho de b (bool) é: %lu\n", sizeof b);
  b = false;
  printf("O valor de b é: %i\n", b);
  return 0;
}
