public class Pilha {
    private No primeiro;
    public boolean estaVazia() {
        return this.primeiro == null;
    }
    public void push (int i) {
        No novo = new No(i);
        if (!this.estaVazia()) {
            novo.setProximo(this.primeiro);
        }
        this.primeiro = novo;
    }
    public int pop () {
        int i = this.primeiro.getInfo();
        this.primeiro = this.primeiro.getProximo();
        return i;
    }
    public void pushLeve (int i) {
        No novo = new No(i);
        if (!this.estaVazia()) {
            novo.setProximo(this.primeiro);
            if (i > novo.getInfo()){
               int aux = novo.getInfo();
               pop ();
               i = aux;
            }
        }
        this.primeiro = novo;
    }
    public int tamanhoPilha(){
        
    }
    @Override
    public String toString() {
        String s = "";
        if (this.estaVazia()) {
            s+= "nao há o que converter";
        }
        else {
            No aux = this.primeiro;
            while (aux != null) {
                s+= aux;
                aux = aux.getProximo();
            }
        }
        return s;
    } 
}
