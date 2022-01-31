import java.util.Scanner;

public class TesteProprietario {
    public static void main(String[] args) {
        Proprietario um, dois;
        Scanner scanner = new Scanner(System.in);
        um = new Proprietario();
        dois = new Proprietario();
        System.out.println("Informe o nome do primeiro Proprietario: ");
        um.setNome(scanner.nextLine());
        System.out.println("Informe o CPF do priemiro Proprietario: ");
        um.setCpf(scanner.nextLine());
        System.out.println("Informe o Rg do primeiro Proprietario: ");
        um.setRg(scanner.nextLine());
        System.out.println("Informe a data de nascimento do primeiro Proprietario: ");
        um.setDataNascimento(scanner.nextLine());
        System.out.println("Informe o endereco do primeiro Proprietario: ");
        System.out.println("Rua: ");
        um.setRua(scanner.nextLine());
        System.out.println("Complemento: ");
        um.setComplemento(scanner.nextLine());
        System.out.println("Bairro: ");
        um.setBairro(scanner.nextLine());
        System.out.println("Cidade: ");
        um.setCidade(scanner.nextLine());
        System.out.println("Estado: ");
        um.setEstado(scanner.nextLine());
        System.out.println("Cep: ");
        um.setCep (scanner.nextLine());

        System.out.println(um);

        System.out.println("\nInforme o nome do segundo Proprietario: ");
        dois.setNome(scanner.nextLine());
        System.out.println("Informe o CPF do segundo Proprietario: ");
        dois.setCpf(scanner.nextLine());
        System.out.println("Informe o Rg do segundo Proprietario: ");
        dois.setRg(scanner.nextLine());
        System.out.println("Informe a data de nascimento do segundo Proprietario: ");
        dois.setDataNascimento(scanner.nextLine());
        System.out.println("Informe o endereco do segundo Proprietario: ");
        System.out.println("Rua: ");
        dois.setRua(scanner.nextLine());
        System.out.println("Complemento: ");
        dois.setComplemento(scanner.nextLine());
        System.out.println("Bairro: ");
        dois.setBairro(scanner.nextLine());
        System.out.println("Cidade: ");
        dois.setCidade(scanner.nextLine());
        System.out.println("Estado: ");
        dois.setEstado(scanner.nextLine());
        System.out.println("Cep: ");
        dois.setCep (scanner.nextLine());
        
        System.out.println(dois);

        scanner.close();
    }
}
