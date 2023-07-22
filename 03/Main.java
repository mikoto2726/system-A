class Main {
        static long add1(long v) { return v+1; }
        public static void main(String args[]) {
                long v = 1;
               // while (v < 0xffffffffL) {
                  while (v < 0xffffffL) { // delete ff for -Xint
                        v = add1(v);
                }
                System.out.println(v);
        }
}
