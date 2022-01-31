#include<stdio.h>

void edata(double,int*, int*);

int main(){
 
 double data;
 int m, a;
 
 printf("Informe a data sem traços ou barras\n");
 scanf("%lf", &data);
 	
 	edata(data,&m,&a);
	
	return 0 ;
	
}
void edata(double data,int*mes,int*ano){
	for(int i=0;i=2;data=i;){
		for(int j =0;j=4;*mes = j;){
			for(int k =0; k=6; *ano=k;){
			}
		}
	}
	printf("%d %d %d",data,*mes,*ano);
}
