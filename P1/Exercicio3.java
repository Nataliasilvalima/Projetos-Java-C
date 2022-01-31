import java.util.Random;

public class Exercicio3 {
    static void DecrescentebubleSort(int v[]){
        for(int i=18; i>0; i--){
            for(int j=19; j>0; j-- ){
                if (v[j] > v[j-1]){
                    int temp = v[j];
                    v[j] = v[j-1];
                    v[j-1] = temp;
                }
            }
        }
    }
    static void geraVetor (int n, int v[]) {
        Random random = new Random();
        for (int i=0; i<v.length; i++) {
            v[i] = random.nextInt( n * v.length);
        }
    }
    static void exibeVetor (int v[], String msg){
        System.out.println(msg);//exibe na tela os numeros
        for (int i=0; i<v.length; i++){
            System.out.print(v[i] + " ");
        }
        System.out.println();//pula uma linha
    }    
    public static void main (String[] args){
        int n = 20;
        int v[] = new int [n];

        geraVetor(n,v);
        DecrescentebubleSort(v);
        exibeVetor(v, "Vetor gerado");
    }
}
