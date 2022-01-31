#include<stdio.h>
#include<math.h>

int main(){
	
	double x1,y1,x2,y2;
	double distancia,p1,p2;
	
	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
	
	p1=x2-x1;
	p2=y2-y1;
	 
	distancia = pow(p1,2) + pow(p2,2);

	printf("%.4lf\n",sqrt(distancia));
	
	return 0 ;
}
