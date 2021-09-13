#include <stdio.h>

int main(void) {
  char c;
  printf("O tamanho de c é: %lu bytes / %lu bits\n", sizeof c, sizeof c * 8);
  return 0;
}
