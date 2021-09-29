#include <stdio.h>

/*
 * Disjunção (OR)
 * Conjunção (AND)
 * 0 0 - 0 // False False = False
 * 0 1 - 0 // False True = False
 * 1 0 - 0 // True False = False
 * 1 1 - 1 // True True = True
 *
 *
 * <, >, ==, !=, >=, <=
*/

int main(void) {
  int a = 8;
  int b = 8;
  
  printf("O resultado é: %d\n", !(a == b) && a > 9);
    
  return 0;
}
