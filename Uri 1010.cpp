//Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada 
//peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

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

