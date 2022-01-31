//Dados um inteiro x e um inteiro não-negativo n, calcular x n.

#include<stdio.h>

int main(){
	
int num, nat, pot;

printf("Informe dois numeros positivos sendo eles um base e o outro expoente:\n");
scanf("%d %d",&num,&nat);

    for(int i=0; i<nat;i++){
	pot= num*num;
}
	printf("O valor da potencia de %d elevado a %d e %d.", num , nat, pot);	
	
	return 0;
}
