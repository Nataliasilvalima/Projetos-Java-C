//NATALIA A SOUZA
#include<stdio.h>
#include<stdlib.h>

int main(){
	
int n,m,i,j;

printf("Informe o tamanho da matriz:");
scanf("%d %d",&n,&m);

int matriz[n][m];

for(i=0; i<n;i++){
	for(j=0; j<m;j++){
	matriz[i][j] = rand()%10;
	}
}	
for(i=0; i<n;i++){
	for(j=0; j<m;j++){
		printf("%d\t",matriz[i][j]);
	}
    printf("\n");
	}
	return 0;
}
