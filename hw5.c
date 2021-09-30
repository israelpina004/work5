#include <stdio.h>

int main() {
  char ch = 'f';
  int i = 1;
  long j = 9223372036854775807;

  printf("char ch: %c, address of ch in hex: %p\n", ch, &ch);
  printf("Address of ch in decimal: %lu\n", &ch);
  printf("int i: %d, address of i: %p\n", i, &i);
  printf("Address of i in decimal: %lu\n", &i);
  printf("long j: %ld, address of j: %p\n", j, &j);
  printf("Address of j in decimal: %lu\n\n", &j);

  char *c = &ch;
  int *k = &i;
  long *m = &j;

  printf("Value of pointer for ch: %p\n", c);
  printf("Value of pointer for i: %p\n", k);
  printf("Value of pointer for j: %p\n\n", m);

  *c = 'z';
  *k = 50;
  *m = 124;

  printf("New char value for ch: %c\n", ch);
  printf("New int value for i: %d\n", i);
  printf("New long value for j: %ld\n\n", j);

  unsigned int n = 72;
  unsigned int *q = &n;
  char *r = &n;

  printf("q: %p\t q points to %u\n", q, *q);
  printf("r: %p\t r points to %u\n\n", r, *r);

  printf("Value of unsigned int n in hex: %x\n", n);
  printf("Value in decimal: %u\n\n", n);

  printf("First byte of n = %hhu\n", *r);
  r++;
  printf("Second byte of n = %hhu\n", *r);
  r++;
  printf("Third byte of n = %hhu\n", *r);
  r++;
  printf("Fourth byte of n = %hhu\n\n", *r);

  n = 72;
  r = &n;
  (*r)++;
  printf("First increment of n: (hex) %x, (decimal) %u\n", n, n);
  (*(r+1))++;
  printf("Second increment: (hex) %x, (decimal) %u\n", n, n);
  (*(r+2))++;
  printf("Third increment: (hex) %x, (decimal) %u\n", n, n);
  (*(r+3))++;
  printf("Fourth increment: (hex) %x, (decimal) %u\n", n, n);

  printf("First byte of n = %hhu\n", *r);
  r++;
  printf("Second byte of n = %hhu\n", *r);
  r++;
  printf("Third byte of n = %hhu\n", *r);
  r++;
  printf("Fourth byte of n = %hhu\n\n", *r);

  n = 72;
  r = &n;
  printf("Adding 16 to each byte of n:\n");
  *r += 16;
  printf("First increment: (hex) %x, (decimal) %u\n", n);
  *(r+1) += 16;
  printf("Second increment: (hex) %x, (decimal) %u\n", n, n);
  *(r+2) += 16;
  printf("Third increment: (hex) %x, (decimal) %u\n", n, n);
  *(r+3) += 16;
  printf("Fourth increment: (hex) %x, (decimal) %u\n", n, n);

  printf("First byte of n = %hhu\n", *r);
  r++;
  printf("Second byte of n = %hhu\n", *r);
  r++;
  printf("Third byte of n = %hhu\n", *r);
  r++;
  printf("Fourth byte of n = %hhu\n", *r);

  return 0;

}
