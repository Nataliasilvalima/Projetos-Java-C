#include<stdio.h>

//Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.////

int main(){
 int num;
 
 printf("Informe um numero inteiro positivo:\n");
 scanf("%d", &num);
 
   int impar=1;
   
 for(int i=0; i<num; i++){
  printf("%d\t", impar);
  impar = impar+2;
	 }
	return 0;
}
