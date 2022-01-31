#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	srand((unsigned)time(NULL));
	int aleatorio = rand() %3;
	int aleatoriosegundo = (rand() %5 +1);
	printf("%d", aleatoriosegundo);
	
	system ("\npause\n");
	
	
	
}
