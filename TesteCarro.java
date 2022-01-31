import java.util.Scanner;
public class TesteCarro {
    public static void main(String[] args) {
        Carro carro = new Carro();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe o modelo do carro:");
        carro.setModelo(scanner.nextLine()); 
        System.out.println("Informe o ano do carro:");
        carro.setAno(scanner.nextLine());
        System.out.println("Informe a marca do carro:");
        carro.setMarca(scanner.nextLine());
        System.out.println("Informe a cor do carro:");
        carro.setCor(scanner.nextLine());
        System.out.println("Informe o Chassi do carro:");
        carro.setChassi(scanner.nextLine());
        System.out.println("Veiculo possui quantas portas?:");
        carro.setNumeroPortas(scanner.nextLine());
        System.out.println("Veiculo possui quantas marchas?:");
        carro.setNumeroMarchas(scanner.nextLine());
        System.out.println("Veiculo possui cambio automatico?:");
        carro.setCambioAutomatico(scanner.nextLine());
        System.out.println("Qual a capacidade do tanque do veículo? :");
        carro.setCapacidadeTanque(scanner.nextLine());
        System.out.println("Qual a velocidade atual do veículo?:");
        carro.setVelocidadeAtual(scanner.nextLine());

        System.out.println(carro);
        
        scanner.close();
    }
}
