#include <stdio.h>

int euclides (int a, int b){
	
	int resto;
    
  while(b!=0){
   resto = a%b;
   a = b;
   b= resto;
	}	
	return a;	
	}
	
int main (){
	
	
	printf("O mdc e %d",euclides(24,15));
		
	return 0;

}
