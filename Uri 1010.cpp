//Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada 
//pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.

#include<stdio.h>
#include<locale.h>

int main(){
	
	//setlocale (LC_ALL,"portuguese");
	
	int cod1, cod2;
	int quant1, quant2;
	double vlr1, vlr2;
	
	scanf("%d %d %lf", &cod1, &quant1, &vlr1);
	scanf("%d %d %lf", &cod2, &quant2, &vlr2);
	
	double total = (quant1 * vlr1 + quant2 * vlr2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
		
	return 0;
}

