#include <stdio.h>

int main(){
	
	int X, Y;
    int C;
    
    int SOMA = 0;
    
    scanf("%i %i", &X ,&Y);
    
    if(X<Y){
    	for ( C=X+1; C<Y; C++)
    	if (C%2!=0)
    	SOMA += C;
    } else{
    	for ( C=Y+1; C<X; C++)
    	if (C%2!=0)
    	SOMA += C;	
	}
	printf("%i\n", SOMA);

   return 0;

	}
	
     
	
	

