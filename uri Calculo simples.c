#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL,"portuguese");
 
  int peca1, peca2, qtd1, qtd2;
 float valor1, valor2,total1, total2;
 
 printf("Digite o c�digo do pe�a1");
 scanf("%d", &peca1);
 
 printf("Digite o c�digo do pe�a2");
 scanf("%d", &peca2);
 
 printf("Digite a quantidade da pe�a1");
 scanf("%d" ,&qtd1);
 
 printf("Digite a quantidade da pe�a2");
 scanf("%d" ,&qtd2);
 
 printf("Digite o valor da pe�a1");
 scanf("%f" ,&valor1);
 
 printf("Digite a valor da pe�a2");
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
