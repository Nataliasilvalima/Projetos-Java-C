#include<stdio.h>

int main(){
	
	int dist;
	double lit, total;
	
	scanf("%d %lf", &dist, &lit);
	
	total= dist / lit;
	
	printf("%.3lf  km/l\n",total);
	
	
	
	
	return 0;
}
