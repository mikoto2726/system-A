class Test2 {
public static void f(long[] A, long[] B, long[] C, int n, long r) {
  for(long k=0; k<r; k++) {
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
        C[j*n+i] = A[j*n+i]+B[j*n+i];
      }
    }
  }
}
public static void main(String arg[]) {
	int n = 128;
	long r = 0xffff;
	long[] A = new long[n*n];
	long[] B = new long[n*n];
	long[] C = new long[n*n];
	f(A, B, C, n, r);
}
}
