#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

 setlocale(LC_ALL,"");

printf("Ol� \n");

int a = 100;
int b = 79;
printf("Escreva o valo de b \n");
scanf("%d",&b);
printf(" O valor de b � %d",b);
 
float c;
printf("Escreva o valo de c \n");
scanf("%f",&c);
printf(" O valor de c � %f",c);

 char letra= 't';
printf("Escreva a letra de c� = %c \n");
fflush(stdin);
scanf("%c",&letra);
printf(" O valor de letra � %c",letra);
 return 0;
}
