#include<stdio.h>
#include<stdlib.h>

int main(){
	
int a,b,c, maior,d;

scanf("%d %d %d",&a,&b,&c);

d=(a+b)+abs(a-b);
maior= (d+c)+abs(d-c);

printf("%d eh o maior",(maior/2));
		
return 0;
}
