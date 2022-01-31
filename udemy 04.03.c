#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	//int a, b, c;
//	printf("Digite o valor dos lados\n");
//	scanf("%d" "%d" "%d", &a, &b, &c);
	
	//if (( a == b) &&( b == c)){
//		printf("Os lados são iguais\n"); 	}
   // else 
   //  if((a ==c) || (a == b)){ printf(" \n Apenas dois lados são iguais");
//	} else { printf("\n Os lados não são iguais\n");
//	}
 int a = 3;
 char b = 'a';
 
switch (a){
 case 1:
 		printf("\ O valor da letra é 1\n");
 		break;
 	case 2:
 		printf("\ O valor da letra é 2\n");
 		break;
 	case 3:
 		printf("\ O valor da letra é 3\n");
 		break;
 default:
 	printf("\ O valor da letra é iválido\n");
 		break;}

  switch(b){
 	case 'x':
 	 printf("\ A letra digitada foi X\n");
 	break;
    case 's':
 			printf("\ A letra digitada foi S\n");
 		break;
		 case 'y':
 			printf("\ A letra digitada foi Y\n");
 		break;	
 		default:
 	printf("\ O valor da letra é iválido\n");}
 }
		


	
