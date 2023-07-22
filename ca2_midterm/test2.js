function f( A, B, C, n, r) {
  for(let k=0; k<r; k++) {
    for(let i=0; i<n; i++) {
      for(let j=0; j<n; j++) {
        C[j*n+i] = A[j*n+i]+B[j*n+i];
      }
    }
  }
}

function main() {
  let n = 128;
  let r = 0xffff;
  let A = [...Array(n * n).keys()].map((_) => { return 0; });
  let B = [...Array(n * n).keys()].map((_) => { return 0; });
  let C = [...Array(n * n).keys()].map((_) => { return 0; });
  f(A, B, C, n, r);
}

main();
