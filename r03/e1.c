#include <stdio.h>

void questions() {
  // Answer the following questions by changing the values of corresponding
  // variables in the code
  // Note: Don't change anything else, especially the printf statement!

  // Suppose we are using a 64-bit little-endian machine
  // If the memory representation of some 2-byte integer variable looks like
  // the following, (each cell is one-byte):
  //                      --------------   high address
  //                      |    0xC6    |
  //                      --------------
  //                      |    0x04    |
  //                      --------------   low address
  //
  // Q1: if the variable is of type short, what's its decimal value?
  // Your answer:
  short answer_q1 = 0;

  // Q2: if the above variable is of type unsigned short, what's it decimal
  // value?
  // Your answer:
  unsigned short answer_q2 = 0;

  // Q3: if a float variable has the following memory layout:
  //                      --------------   high address
  //                      |    0xC4    |
  //                      --------------
  //                      |    0xF0    |
  //                      --------------
  //                      |    0x00    |
  //                      --------------
  //                      |    0x00    |
  //                      --------------   low address
  // What's the decimal value?
  // Your answer:
  float answer_q3 = 0.0;

  // Q4: if a float variable has decimal value 20.375, and the memory layout
  // looks like the following:
  //                      -----------   high address
  //                      |    a    |
  //                      -----------
  //                      |    b    |
  //                      -----------
  //                      |    c    |
  //                      -----------
  //                      |    d    |
  //                      -----------   low address
  // What's the hex representation of a, b, c, d?
  // Your answer:
  unsigned char a = 0x01;
  unsigned char b = 0x02;
  unsigned char c = 0x03;
  unsigned char d = 0x04;

  // Don't change anything below!
  // print answers
  printf("Q1: %d\n", (int)answer_q1);
  printf("Q2: %d\n", (int)answer_q2);
  printf("Q3: %.6f\n", answer_q3);
  printf("Q4: 0x%.2x%.2x%.2x%.2x\n", a, b, c, d);
}

int main() {
  questions();
  return 0;
}
