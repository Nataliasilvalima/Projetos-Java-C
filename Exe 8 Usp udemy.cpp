// Dado um inteiro não-negativo n, determinar n!(fatorial)

#include<stdio.h>

int main(){
	
	int num, fat=1;
	
	printf("Informe o numero:\n");
	scanf("%d",&num);
	
    for(int i=2;i<=num;i++){
       	fat=fat*i;
        	
		}
        
	printf("O fatorial de %d e %d",num,fat);
	
	return 0;
	
}
