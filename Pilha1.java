public class Pilha1 {
    private int[] v;
    private int topo;
    public Pilha1 (int capacidade) {
        this.v = new int[capacidade];
        this.topo = 0;
    }
    public boolean pilhaVazia () {
        return this.topo == 0;
    }
    public boolean pilhaCheia () {
        return this.topo == v.length;
    }
    public void push (int elemento) { //empilha
        this.v[this.topo++] = elemento;
    }
    public int pop () { //desempilha
        return this.v[--this.topo];
    }
    @Override
    public String toString () {
        String s = "";
        if (this.pilhaVazia()) {
            s+= "vazia ";
        }
        else {
            for (int i=topo-1; i>=0; i--) {
                s+= this.v[i] + "";
            }
        }
        return s;
    }
}
