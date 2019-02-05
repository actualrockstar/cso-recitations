#include <stdio.h>

int foo(int);

int main() {
  int n = 10;
  int sum = foo(n);
  printf("sum of 1 to %d is: %d\n", n, sum);
  return 0;
}
