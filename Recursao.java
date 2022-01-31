public class Recursao {
    static int fatoriarecursivo (int n) {
        if (n <= 1) return 1;
        return n * fatoriarecursivo(n-1);

    }
    static int fibonacciRecursivo (int n) {
        if (n<= 1) return 1;
        return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
    }
    //programacao dinamica
    static void fibonacci (int[]v, int n) {
        v = new int[n];
        v[0] = 1;
        v[1] = 1;
        for (int i = 2; i<n; i++)
        v[i] = v[i-1] + v[i-2];
    }
     public static void main(String[] args) {
        int v[] = new int[6];
        System.out.println("fatorial de 5 = " + fatoriarecursivo(5));
        System.out.println("fibonacci de 5 = " + fibonacciRecursivo(5));

        fibonacci(v, 6);
        System.out.println("fibonacci de 5 = " + v[5]);
    }
}