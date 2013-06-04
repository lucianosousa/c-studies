#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, *px, *py;
  x = 9;
  px = &x;
  py = px;

  printf("x=%d\n", x);
  printf("x=%d\n", &x);
  printf("x=%d\n", px);
  printf("x=%d\n", py);
  printf("x=%d\n", *px);
  printf("x=%d\n", *py);

  return 0;
}

