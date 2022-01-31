#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

 setlocale(LC_ALL,"");

printf("Olá \n");

int a = 100;
int b = 79;
printf("Escreva o valo de b \n");
scanf("%d",&b);
printf(" O valor de b é %d",b);
 
float c;
printf("Escreva o valo de c \n");
scanf("%f",&c);
printf(" O valor de c é %f",c);

 char letra= 't';
printf("Escreva a letra de cé = %c \n");
fflush(stdin);
scanf("%c",&letra);
printf(" O valor de letra é %c",letra);
 return 0;
}
