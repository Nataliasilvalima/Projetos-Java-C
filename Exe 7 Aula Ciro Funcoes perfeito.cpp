#include<stdio.h>
#include<stdbool.h>

bool perfeito (int);

int main(){
	
    int n;
	scanf("%d",&n);
	
	perfeito (n);
	
	return 0;
}

bool perfeito(int n){
	
	int i,soma=0;
	
	for(i=1; i<n; i++){
	if (n % i==0){
		soma+=i;
	}
	}
	if(soma==n)
	printf("%d e um numero perfeito\n",n);
	
	else {
	printf("%d nao e um numero perfeito\n",n);	
	}
	return 0;
}
