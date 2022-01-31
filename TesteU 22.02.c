#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Amo fazer isso
 void main() {
 	printf("OI\n");
 	setlocale(LC_ALL,"");
 	printf("Olá\n");
 	
 	int a = 67;
 	int b = 100;
 	printf("%d\n",a+b);
 	printf("%d\n",b-a);
 	scanf("%d", &a);
 }
