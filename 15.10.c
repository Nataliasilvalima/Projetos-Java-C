#include <stdio.h>
 
int main() {
 
 char nome [10];
 float salario ; 
 double totalvendas , TOTAL ;
 
 scanf("%c ", &nome);
 scanf("%f ", &salario);
 scanf("%lf",&totalvendas);
 
 TOTAL = salario + (totalvendas * 15)/100 ;
 
 printf("TOTAL = R$ %.2lf\n", TOTAL);
 
 
     return 0;
}
