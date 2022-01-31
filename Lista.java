public class Lista {
    private No primeiro;
    //usaremos apenas o construtor: primeiro null
    public No getPrimeiro(){
        return this.primeiro ;
    }
    public void setPrimeiro( No primeiro){
        this.primeiro = primeiro;
    }
    public boolean estaVazia (){
        if (this.primeiro == null)
            return true;
        return false;
        //return this.primeiro == null.
    }
    public void insereInicio( int i){
        No novo = new No(i);
        if (!this.estaVazia ()){
            novo.setProximo(this.getPrimeiro());
        }
        this.setPrimeiro(novo);
    }
    @Override
    public String toString(){
        String s = "Lista: ";
        if (this.estaVazia()){
            s+= "esta vazia ";
        }
        else{
            No aux = this.primeiro;
            while (aux != null ){
                s+= aux;
                aux = aux.getProximo();
            }
            s+= "//";
        }
        return s;
    }
    public void insereFim (int i){
        No novo = new No(i);
        if (this.estaVazia()){
            this.setPrimeiro(novo);
        }
        else {
            No aux = this.primeiro;
            while (aux.getProximo()!= null){
                aux = aux.getProximo();
            }
            aux.setProximo(novo);
        }
    }
    public int removeInicio (){
        int i = this.primeiro.getInfo();
        this.setPrimeiro(this.primeiro.getProximo());
        return i;
    }
    public int removeFim (){
        int i;
        if (this.primeiro.getProximo() == null) {//tem um so
            i = this.primeiro.getInfo();
            this.setPrimeiro(null); //esvaziei a lista

        }
        else{// tem mais que um
            No aux = this.primeiro;
            while (aux.getProximo().getProximo() != null) {
                aux = aux.getProximo();
            }
            i = aux.getProximo().getInfo();
            aux.setProximo(null);

        }
        return i;

    }
}
