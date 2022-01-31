import java.util.Random;
import java.util.Scanner;

import java.util.Date;

public class Ordenacao{
    static void geraVetor (int v[]) {
        Random random = new Random();//Classe random cria numeros aleatorios
        for (int i=0; i<v.length; i++){
            v[i] = random.nextInt(10*v.length);
        }    
    }
    static void exibeVetor (int v[], String msg){
        System.out.println(msg);//exibe na tela os numeros
        for (int i=0; i<v.length; i++){
            System.out.print(v[i] + " ");
        }
        System.out.println();//pula uma linha
    }
    static void bubleSort(int v[]){
        for(int i=1; i<v.length; i++){
            for(int j=0; j<v.length-i; j++ ){
                if (v[j] > v[j+1]){
                    int temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
                }
            }
        }
    }
    static void insertionSort(int v[]){
        int copia, j;
        for (int i = 1; i < v.length; ++i){
            /* i representa ate onde vai, no momento, o "novo vetor" (eh o mesmo 
            vetor mas uma regiao ja processada sera considerada separadamente da
            ainda nao processada)*/
            copia = v[i]; // vai inserir o elemento da posicao i no "novo vetor"
          for (j = i-1; j >= 0 && v[j] > copia; --j){
            /* ate encontrar a posicao correta para vetor[i], vai abrindo espaco, 
            avancando uma posicao cada elemento*/
            v[j+1] = v[j]; 
          }
          // posicao j+1 eh a correta para o elemento vetor[i] que foi copiado antes
          v[j+1] = copia; 
        }
    }
      static  void selectionSort(int v[]){
        int minimo, tmp;
        for (int i = 0; i < v.length-1; i++){
          /* a cada iteracao, nao olha mais uma posicao a esquerda do vetor 
          (todas as iguais ou menores que o valor atual de i)*/
          minimo = i;
          for (int j = i+1; j < v.length; j++){
            // seleciona o menor valor ainda nao selecionado do vetor
            if (v[j] < v[minimo]) {
              minimo = j;
            }
          }
          /* Insere o valor selecionado, trocando a posicao com o que estava anteriormente la */
          tmp = v[i];
          v[i] = v[minimo];
          v[minimo] = tmp;
        }
    }
        //Trecho da main do programa
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);//instanciando um objeto scanner
        System.out.print("Digite o tamanho do vetor: ");
        int n = scanner.nextInt();//le o primeiro inteiro que entrara 
        int[] v = new int[n];
        Date iniGerador = new Date();
        long ini = iniGerador.getTime();
        geraVetor(v);
        Date finalGerador = new Date();
        long fim = finalGerador.getTime();
        System.out.printf("Geracao demorou %d milissegundos\n" , fim - ini);
        exibeVetor(v, "Vetor gerado: ");
        System.out.println("Ordenando...");
        long iniBubble = new Date().getTime();
        bubleSort(v);
        long fimBubble = new Date().getTime();
        System.out.printf("A ordenacao Buble demorou %d milissegundos\n", fimBubble - iniBubble);
        exibeVetor(v, "Vetor Ordenado");
        System.out.println("Ordenando...");
        long iniInsertion = new Date().getTime();
        insertionSort(v);
        long fimInsertion = new Date().getTime();
        System.out.printf("A ordenacao Insertion demorou %d milissegundos\n", fimInsertion - iniInsertion);
        exibeVetor(v, "Vetor Ordenado");
        System.out.println("Ordenando...");
        long iniSelection = new Date().getTime();
        selectionSort(v);
        long fimSelection= new Date().getTime();
        System.out.printf("A ordenacao Selection demorou %d milissegundos\n", fimSelection- iniSelection);
        //exibeVetor(v, "Vetor Ordenado");
        scanner.close();//free libera o objeto
    }
}   