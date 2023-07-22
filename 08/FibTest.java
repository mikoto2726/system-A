class FibTest {
        static long fib(long n) {
                if (n==1) return n;
                if (n==0) return n;
                else return fib(n-1)+fib(n-2);
        }
        public static void main(String args[]) {
                long n = Long.parseLong(args[0]);
                System.out.printf("fib(%d)  = %d\n", n, fib(n));
        }
}