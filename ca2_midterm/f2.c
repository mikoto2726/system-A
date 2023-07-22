void f(long *A, long *B, long *C, long n, long r) {
  for(long k=0; k<r; k++) {
    for(long i=0; i<n; i++) {
      for(long j=0; j<n; j++) {
        C[j*n+i] = A[j*n+i] + B[j*n+i];
      }
    }
  }
}
