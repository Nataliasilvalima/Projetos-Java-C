#include<stdio.h>
#include<string.h>
#include<stdlib.h>

bool islowercase(char*str);

int main(){
	
	char palavra, *p;
	
	printf("Informe a palavra contendo apenas letras minusculas:");
	scanf("%40[^\n]",&palavra);
	
	*p=palavra;
	
	islowercase (p);
	
	return 0 ;
}
bool islowercase(char*str){
	
	char *str;
    
	if(islower(str)){
		printf("%s esta correta",str);
	}else {
		while (palavra!lower){	
		printf("Palavra esta incorreta, informe novamente:");
	}
	}
}
