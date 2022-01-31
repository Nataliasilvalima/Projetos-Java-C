#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL,"portuguese");
 
  int peca1, peca2, qtd1, qtd2;
 float valor1, valor2,total1, total2;
 
 printf("Digite o código do peça1");
 scanf("%d", &peca1);
 
 printf("Digite o código do peça2");
 scanf("%d", &peca2);
 
 printf("Digite a quantidade da peça1");
 scanf("%d" ,&qtd1);
 
 printf("Digite a quantidade da peça2");
 scanf("%d" ,&qtd2);
 
 printf("Digite o valor da peça1");
 scanf("%f" ,&valor1);
 
 printf("Digite a valor da peça2");
 scanf("%f" ,&valor2);
 
 total1 = qtd1 * valor1;
 total2 = qtd2 * valor2;
 
if(peca1>=1){
	printf("VALOR A PAGAR: R$ %0.2f ",total1);
}
if(peca2>=1){
	printf("VALOR A PAGAR: R$ %0.2f ",total2);
}

 
    return 0;
}
