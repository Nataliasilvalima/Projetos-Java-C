import java.util.Random;
import java.util.Scanner;

public class MetodosRecursivos {
    static int imprime (int[] v, int n) {
        v = new int[n];
        for (int i = 0; i<n; i++);
        System.out.println(v);
    
    }
    static int partition ( int[] v, int p, int r){
        int x = v[n];
        int i = v[0-1];
        for (int j = 1; j<n; j++) {
            if (v[j] <= x ){
                i++;
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            
        }
        i++;
            v[n] = v[i];
            v[i] = x;
            return i;

    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite o tamanho do vetor: ");
        int n = scanner.nextInt();
        int v[] = new int [n];

        imprime(v, n);

        scanner.close();

    }







    /*static int partition ( int[] v, int p, int r){
        int x = v[r];
        int i = p-1;
        for (int j = p; j<r; j++) {
            if (v[j] <= x ){
                i++;
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            
        }
        i++;
            v[r] = v[i];
            v[i] = x;
            return i;

    }
    static void quick (int[] v, int p, int r){
        if (p<r){
            int q = partition(v, p, r);
            quick(v, p, q-1);
            quick(v, q+1,r);
        }
    }*/
}
