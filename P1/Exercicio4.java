public class Exercicio4 {
    static void bubleSort(int n[]){
        for(int i=7; i<n.length; i++){
            for(int j=6; j<n.length-i; j++ ){
                if (n[j] > n[j+1]){
                    int temp = n[j];
                    n[j] = n[j+1];
                    n[j+1] = temp;
                }
            }
        }
    }
    static void exibeVetor (int v[], String msg){
        System.out.println(msg);//exibe na tela os numeros
        for (int i=0; i<v.length; i++){
            System.out.print(v[i] + " ");
        }
        System.out.println();//pula uma linha
    }   
    static void exibeVetor2 (int v[], String msg){
        System.out.println(msg);//exibe na tela os numeros
        for (int i=6; i<v.length; i++){
            System.out.print(v[i] + " ");
        }
        System.out.println();//pula uma linha
    }   
    public static void main( String[] args){
    
        int n[] = {1,4,3,0,4,8,2,0,2,1,0,3,3};
                       
        exibeVetor(n, "RA:");
        bubleSort(n);
        exibeVetor2(n, "Os ultimos 7 numeros do RA Ordenados");
           




    }
}
