#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  register int i = 0;

  printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
  printf("O valor de i: %u\n", i);
  return 0;
}
