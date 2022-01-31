#include <stdio.h>
 
int main() {
	int Alcool, Gasolina, Diesel , Vote;
	Alcool = 0, Gasolina = 0 , Diesel = 0;
	
	while (1) {
	
	scanf("%d", &Vote);
	if (4 == Vote ) 
	    break;
	
	if (1 == Vote)
	Alcool++;
	
	if (2 == Vote)
	Gasolina++;
	
	if (3 == Vote)
    Diesel++;
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",Alcool);
	printf("Gasolina: %d\n",Gasolina);
	printf("Diesel: %d\n",Diesel);
 
    
    return 0;
}
