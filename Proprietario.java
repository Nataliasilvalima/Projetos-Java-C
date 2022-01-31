public class Proprietario {
    private String nome;
    private String cpf;
    private String rg;
    private String dataNascimento;
    private String rua;
    private String bairro;
    private String cidade;
    private String estado;
    private String complemento;
    private String cep;  
    
    public Proprietario () {
        this.nome = null;
        this.cpf = null;
        this.rg = null;
        this.rua = null;
        this.bairro = null;
        this.cep = null;
        this.estado = null;
        this.cidade = null;
        this.complemento = null;
        this.cep = null;

    }
    public String getNome(){
        return this.nome;
    }
    public String getCpf(){
        return this.cpf;
    }
    public String getRg(){
        return this.rg;
    }
    public String getDataNascimento(){
        return this.dataNascimento;
    }
    public String getRua(){
        return this.rua;
    }
    public String getComplemento(){
        return this.complemento;
    }
    public String getBairro(){
        return this.bairro;
    }
    public String getCidade(){
        return this.cidade;
    }
    public String getEstado(){
        return this.estado;
    }
    public String getCep(){
        return this.cep;
    }
    public void setNome( String nome ){
        this.nome = nome;
    }
    public void setCpf( String cpf){
        this.cpf = cpf;
    }
    public void setRg ( String rg){
        this.rg = rg;
    }
    public void setDataNascimento ( String dataNascimento){
        this.dataNascimento = dataNascimento;
    }
    public void setRua ( String rua){
        this.rua = rua;
    }
    public void setCidade ( String cidade){
        this.cidade = cidade;
    }
    public void setBairro ( String bairro){
        this.bairro = bairro;
    }
    public void setComplemento ( String complemento){
        this.complemento = complemento;
    }
    public void setEstado ( String estado){
        this.estado = estado;
    }
    public void setCep( String cep){
        this.cep = cep;
    }
    @Override
    public String toString(){
        return "\n\nProprietario: "+ this.getNome() + "\nCpf: " + this.getCpf()+ "\nRg: " + this.getRg() + "\nData de Nascimento: "+ this.getDataNascimento() +
        "\nCidade: "+this.getCidade() + "\nBairro: "+ this.getBairro() + "\nRua: "+ this.getRua() + "\nCEP: "+ this.getCep() +
        "\nComplemento: " +this.getComplemento() +"\nEstado: "+ this.getEstado();
    }
}

