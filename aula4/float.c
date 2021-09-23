#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  float f = 40.333424;
  printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);
  printf("O valor de f: %1.2f\n", f);
  return 0;
}
