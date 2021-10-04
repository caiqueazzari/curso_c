#include <stdio.h>

// operadores bit a bit
// & and
// | ou
// ^ exclusivo ou xor
// ~ negação
// << for bit shifting 
// >> for bit shifting 

int main(void) {
  int a = 359; 
  int chave = 3;

  printf("O resultado é: %d\n", a ^ chave);
    
  return 0;
}
