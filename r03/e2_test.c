// Don't change this file!
// Any changes in this file will be overwritten at grading time

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int toggle_nth_bit(int, int);
int count_ones(unsigned int);

int main(int argc, char** argv) {
  assert(toggle_nth_bit(10, 0) == 11);
  assert(toggle_nth_bit(10, 1) == 8);
  assert(toggle_nth_bit(0x3E4F0187, 5) == 0x3E4F01A7);
  assert(toggle_nth_bit(0x3E4F0187, 28) == 0x2E4F0187);

  assert(count_ones(0x435ABF70) == 17);
  int a = rand();
  assert(abs(count_ones(a) - count_ones(toggle_nth_bit(a, 15))) == 1);

  if (argc > 1) {
    printf("%s\n", argv[1]);
  }
  return 0;
}
