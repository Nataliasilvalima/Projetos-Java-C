#include <stdio.h>

int maior(int, int); //prot�tipo da fun��o maior()

int main() {
int n1, n2;

printf("Digite dois n�meros inteiros: ");
scanf("%d %d", &n1, &n2);

printf("O maior �: %d\n", maior(n1, n2));
return 0;
}
int maior(int a, int b) {
if (a > b)
return a;
return b;
}
