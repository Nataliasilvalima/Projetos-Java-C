#include <stdio.h>

int main(){
	
	double volume, R;
	double pi = 3.14159;
	
	scanf("%lf", &R);
	
 volume = (4.0/3.0) * pi * R*R*R;
	
	printf("VOLUME = %lf", volume);
	
	return 0;
}
