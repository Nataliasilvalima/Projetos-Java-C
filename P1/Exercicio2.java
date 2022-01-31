import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;

public class Exercicio2 {
    static void geraVetor (int n, int v[]) {
        Random random = new Random();
        for (int i=0; i<v.length; i++) {
            v[i] = random.nextInt(n);
        }
    }
    static boolean buscaSimples (int v[]) {
        for (int i=0; i<v.length; i++) {
            if (v[i] == v[i+1]) return true;
        }
        return false;
    }
    static void exibeVetor (int v[], String msg) {
        System.out.println (msg);
        for (int i=0; i<v.length; i++) {
            System.out.print(v[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite o tamanho do vetor: ");
        int n = entrada.nextInt();
        System.out.println("Digite o limite de geracao: ");
        int limite = entrada.nextInt();
        int[] v = new int[n];
            
        geraVetor(limite, v); 
        Arrays.sort(v);
        exibeVetor(v, "Vetor gerado:"); 
        buscaSimples(v); 
            

        entrada.close();
    }
}
