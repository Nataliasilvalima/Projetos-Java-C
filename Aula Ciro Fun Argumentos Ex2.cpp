#include <stdio.h>
void dobro(int);
int main() {
int n;
printf("Informe um numero inteiro: ");
scanf("%d", &n);
dobro(n);
printf("Numero informado %d\n", n);
return 0;
}
void dobro(int x) {
x = x * 2;
printf("Dobro: %d\n", x);
}
