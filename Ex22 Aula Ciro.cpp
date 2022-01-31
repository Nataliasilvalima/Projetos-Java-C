#include<stdio.h>

#define KPH 95 /* Km por hora */
#define METROS 4
#define POD (METROS + METROS)
#define SEIS 6;
#define NEW(x)((x) +(5))



int main(){
	
    int dist, tempo, plort,num,y,berg,lob,est,nilp;
    
    scanf("%d", &tempo);
    
	dist = KPH * tempo;
	
	printf("%d KM por hora\n",dist);
	
	plort = METROS * POD;
	
	printf("%d Metros\n",plort);
		
	num = SEIS;
	
	printf("%d NUM",num);
	
	scanf("%d", &y);
	scanf("%d", &berg);
	scanf("%d", &lob);
	
	y = NEW(y);
    berg = NEW(berg) * lob;
    est = NEW(berg) / NEW(y);
    nilp = lob * NEW(-berg)
    
    printf("%d\n",y);
    printf("%d \n",berg);
    printf("%d\n",est);
    printf("%d \n",nilp);
    
	return 0;
}
