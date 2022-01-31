public class TesteLista {
    public static void main(String[] args) {
        Lista l = new Lista();
        System.out.println("Lista criada :" + l);

        l.insereInicio(2);
        l.insereInicio(4);
        l.insereInicio(6);
        l.insereInicio(8);
        System.out.println("Lista com insercao no inicio "+ l);
        
        l.insereFim(1);
        l.insereFim(3);
        l.insereFim(5);
        System.out.println("Lista com insercao no fim "+ l);

        if (!l.estaVazia()){
        System.out.println(l.removeInicio() + " foi removido do Inicio ");
        System.out.println("Lista depois da remocao de inicio:\n" + l);
        }
        if (!l.estaVazia()){
            System.out.println(l.removeFim() + " foi removido do Fim ");
            System.out.println("Lista depois da remocao do fim:\n" + l);
        }
    }
    
}
