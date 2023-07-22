#include <stdlib.h>
#include <stdio.h>
void f(long *, long *, long *, long, long);
int main() {
  const long n = 128;
  long *A = malloc(sizeof(A[0])*n*n);
  long *B = malloc(sizeof(B[0])*n*n);
  long *C = malloc(sizeof(C[0])*n*n);
  const long r = 0xffff; // repeat count
  printf("\nA,B,C are %ldx%ld long arrays\n", n, n);
  printf("\nrepeat %ld times\n", r);
  f(A, B, C, n, r);
  printf("\nC[%ld][%ld]=%ld\n", n/2,n/2,C[n*n/2+n/2]);
}
