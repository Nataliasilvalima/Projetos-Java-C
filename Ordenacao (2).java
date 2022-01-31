import java.util.Random;
import java.util.Scanner;
import java.util.Date;

public class Ordenacao {
    static void geraVetor (int v[]) {
        Random random = new Random();
        for (int i=0; i<v.length; i++) {
            v[i] = random.nextInt(10*v.length);
        }
    }
    static void exibeVetor (int v[], String msg) {
        System.out.println (msg);
        for (int i=0; i<v.length; i++) {
            System.out.print(v[i] + " ");
        }
        System.out.println();
    }
    static void bubbleSort (int v[]) {
        for (int i=1; i<v.length; i++) {
            for (int j=0; j < v.length-i; j++) {
                if (v[j] > v[j+1]) {
                    int temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
                }
            }
        }
    }
    static int partition ( int[] v, int p, int r){
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
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print ("digite o tamanho do vetor: ");
        int n = scanner.nextInt();
        scanner.close();
        int[] v = new int[n]; 
        geraVetor(v);
        exibeVetor(v, "primeiro vetor gerado:");
        long iniBubble = new Date().getTime();
        bubbleSort(v);
        long fimBubble = new Date().getTime();
        System.out.printf("bubble demorou %d milissegundos\n", fimBubble - iniBubble);
        exibeVetor(v, "vetor ordenado pelo bubble:");
        
        geraVetor(v);
        exibeVetor(v,"Segundo vetor gerado:");
        long iniQuick = new Date().getTime();
        quick(v, 0, n-1);
        long fimQuick = new Date().getTime();
        System.out.printf("quick demorou %d milissegundos\n", fimQuick - iniQuick);
        exibeVetor(v, "vetor ordenado pelo quickSort");

    }
}