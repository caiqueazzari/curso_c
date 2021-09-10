#include <stdio.h>

int main(void) {
  int ret = 0;
	ret = printf("Hello World!\n");
  printf("return from previous printf(): %d\n", ret);
  return 0;
}
