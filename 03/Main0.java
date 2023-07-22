class Main0 {
        static long add1(long v) { return v+1; }
        public static void main(String args[]) {
                long v = 1;
                while (v != 0) {
                        v = add1(v);
                }
                System.out.println(v);
        }
}